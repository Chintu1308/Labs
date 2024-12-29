import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.Timer;
import java.awt.Graphics;
import java.awt.Font;
import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class Week11a extends JPanel {
    private int xPosition = 0; 
    private String message = "Hello, Welcome to My Application!";
    private Timer timer;
    public Week11a() {
        setBackground(Color.WHITE); 
        setFont(new Font("Arial", Font.BOLD, 24)); 
        timer = new Timer(50, new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                xPosition += 5;
                if (xPosition > getWidth()) { 
                    xPosition = -getFontMetrics(getFont()).stringWidth(message);
                }
                repaint(); 
            }
        });
        timer.start(); 
    }
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g); // Clear the background
        g.setColor(Color.BLUE); // Set text color
        g.drawString(message, xPosition, getHeight() / 2); 
    }
    public static void main(String[] args) {
        JFrame frame = new JFrame("Scrolling Message");
        Week11a panel = new Week11a(); 
        frame.add(panel);
        frame.setSize(600, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        frame.setVisible(true);
    }
}
