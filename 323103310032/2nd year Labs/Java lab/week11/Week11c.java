import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class Week11c extends JFrame {
    private JLabel statusLabel;
    public Week11c() {
        setTitle("Mouse Event Example");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());
        statusLabel = new JLabel("Interact with the panel to see mouse events.");
        statusLabel.setHorizontalAlignment(SwingConstants.CENTER);
        add(statusLabel, BorderLayout.SOUTH);
        JPanel panel = new JPanel();
        panel.setBackground(Color.LIGHT_GRAY);
        add(panel, BorderLayout.CENTER);
        panel.addMouseListener(new MouseAdapter() {
           
            public void mouseClicked(MouseEvent e) {
                statusLabel.setText("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
            }
           
            public void mouseEntered(MouseEvent e) {
                statusLabel.setText("Mouse entered the panel.");
            }
            
            public void mouseExited(MouseEvent e) {
                statusLabel.setText("Mouse exited the panel.");
            }
            
            public void mouseReleased(MouseEvent e) {
                statusLabel.setText("Mouse released at (" + e.getX() + ", " + e.getY() + ")");
            }
        });
        panel.addMouseMotionListener(new MouseAdapter() {
            @Override
            public void mouseMoved(MouseEvent e) {
                statusLabel.setText("Mouse moved to (" + e.getX() + ", " + e.getY() + ")");
            }
        });
    }
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Week11c frame = new Week11c();
            frame.setVisible(true);
        });
    }
}
