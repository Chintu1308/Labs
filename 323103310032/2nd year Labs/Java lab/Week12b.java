import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class Week12b {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Table Example");
        frame.setSize(600, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        String[] columnNames = {"SNO", "Name", "Age", "Department", "Salary"};
        Object[][] data = {
                {1, "Hari", 51, "CSE", 150000},
                {2, "Praveen", 19, "CSE", 60000},
                {3, "Akhil", 35, "CSE", 70000},
                {4, "Bharat", 11, "NONE", 800}
        };

        JTable table = new JTable(new DefaultTableModel(data, columnNames));
        JScrollPane scrollPane = new JScrollPane(table);
        frame.add(scrollPane);

        frame.setVisible(true);
    }
}