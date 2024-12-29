import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Week12a extends JFrame {
    private JRadioButton lineButton, rectangleButton, ovalButton;
    private JPanel drawingPanel;
    private String selectedShape = "Line";
    private Point startPoint, endPoint;

    public Week12a() {
        setTitle("Shape Drawer");
        setSize(600, 400);
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        setLayout(new BorderLayout());

        lineButton = new JRadioButton("Line");
        rectangleButton = new JRadioButton("Rectangle");
        ovalButton = new JRadioButton("Oval");

        ButtonGroup group = new ButtonGroup();
        group.add(lineButton);
        group.add(rectangleButton);
        group.add(ovalButton);
        lineButton.setSelected(true);

        JPanel controlPanel = new JPanel();
        controlPanel.setLayout(new FlowLayout());
        controlPanel.add(lineButton);
        controlPanel.add(rectangleButton);
        controlPanel.add(ovalButton);

        add(controlPanel, BorderLayout.NORTH);

        drawingPanel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);
                if (startPoint != null && endPoint != null) {
                    Graphics2D g2d = (Graphics2D) g;
                    g2d.setStroke(new BasicStroke(2));
                    switch (selectedShape) {
                        case "Line":
                            g2d.drawLine(startPoint.x, startPoint.y, endPoint.x, endPoint.y);
                            break;
                        case "Rectangle":
                            int rectX = Math.min(startPoint.x, endPoint.x);
                            int rectY = Math.min(startPoint.y, endPoint.y);
                            int rectWidth = Math.abs(endPoint.x - startPoint.x);
                            int rectHeight = Math.abs(endPoint.y - startPoint.y);
                            g2d.drawRect(rectX, rectY, rectWidth, rectHeight);
                            break;
                        case "Oval":
                            int ovalX = Math.min(startPoint.x, endPoint.x);
                            int ovalY = Math.min(startPoint.y, endPoint.y);
                            int ovalWidth = Math.abs(endPoint.x - startPoint.x);
                            int ovalHeight = Math.abs(endPoint.y - startPoint.y);
                            g2d.drawOval(ovalX, ovalY, ovalWidth, ovalHeight);
                            break;
                    }
                }
            }
        };
        drawingPanel.setBackground(Color.WHITE);
        add(drawingPanel, BorderLayout.CENTER);

        drawingPanel.addMouseListener(new MouseAdapter() {
            @Override
            public void mousePressed(MouseEvent e) {
                startPoint = e.getPoint();
            }

            @Override
            public void mouseReleased(MouseEvent e) {
                endPoint = e.getPoint();
                drawingPanel.repaint();
            }
        });

        lineButton.addActionListener(e -> selectedShape = "Line");
        rectangleButton.addActionListener(e -> selectedShape = "Rectangle");
        ovalButton.addActionListener(e -> selectedShape = "Oval");
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Week12a frame = new Week12a();
            frame.setVisible(true);
        });
    }
}