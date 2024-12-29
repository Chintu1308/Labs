import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class Week12c extends JFrame {
    private JTable table;
    private JComboBox<String> departmentComboBox;
    private DefaultTableModel tableModel;
    private List<String[]> employeeData;

    public Week12c() {
        setTitle("Employee Data Viewer");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        JPanel controlPanel = new JPanel();
        JButton loadFileButton = new JButton("Load CSV File");
        departmentComboBox = new JComboBox<>(new String[]{"All Departments"});
        controlPanel.add(loadFileButton);
        controlPanel.add(new JLabel("Filter by Department:"));
        controlPanel.add(departmentComboBox);
        add(controlPanel, BorderLayout.NORTH);

        tableModel = new DefaultTableModel(new String[]{"ID", "Name", "Age", "Department", "Salary"}, 0);
        table = new JTable(tableModel);
        add(new JScrollPane(table), BorderLayout.CENTER);

        employeeData = new ArrayList<>();

        loadFileButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                loadCSVFile();
            }
        });

        departmentComboBox.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                filterByDepartment((String) departmentComboBox.getSelectedItem());
            }
        });
    }

    private void loadCSVFile() {
        JFileChooser fileChooser = new JFileChooser();
        int result = fileChooser.showOpenDialog(this);
        if (result == JFileChooser.APPROVE_OPTION) {
            File selectedFile = fileChooser.getSelectedFile();
            readCSVFile(selectedFile);
        }
    }

    private void readCSVFile(File file) {
        employeeData.clear();
        tableModel.setRowCount(0);
        try (BufferedReader br = new BufferedReader(new FileReader(file))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] data = line.split(",");
                employeeData.add(data);
            }
            populateDepartmentComboBox();
            filterByDepartment("All Departments");
        } catch (IOException e) {
            JOptionPane.showMessageDialog(this, "Error reading the file: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void populateDepartmentComboBox() {
        departmentComboBox.removeAllItems();
        departmentComboBox.addItem("All Departments");
        employeeData.stream()
                .map(data -> data[3])
                .distinct()
                .forEach(departmentComboBox::addItem);
    }

    private void filterByDepartment(String department) {
        tableModel.setRowCount(0);
        for (String[] data : employeeData) {
            if ("All Departments".equals(department) || data[3].equals(department)) {
                tableModel.addRow(data);
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Week12c frame = new Week12c();
            frame.setVisible(true);
        });
    }
}