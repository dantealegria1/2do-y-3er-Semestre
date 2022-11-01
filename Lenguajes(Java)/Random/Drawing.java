import java.applet.Applet; 
import java.awt.*; 
import java.awt.event.*;

import javax.swing.JButton; 
public class Drawing extends Applet implements ActionListener
{ 
    JButton button;
    int oportunidades=0;
    Image img;


public void paint(Graphics g) 
{ 
      g.setFont(new Font("Arial",Font.BOLD,12)); 
      g.drawString("hola", 100, 70);   
      g.setColor(Color.blue);
      g.drawLine(100,110,140,150);
      g.drawOval(100,110,140,150);
      g.drawString("prueba",50,50);
} 
public void actionPerformed(ActionEvent ae)
{
    oportunidades++;
    repaint();
}
public static void main(String[] args) 
{ 
    Frame drawLineApplet = new Frame("Drawing a line"); 
    drawLineApplet.setSize(500, 450); 
    Applet DrawLine = new DrawLine(); 
    drawLineApplet.add(DrawLine); 
    drawLineApplet.setVisible(true); 
    drawLineApplet.addWindowListener(new WindowAdapter() { 
    public void windowClosing(WindowEvent e) {System.exit(0); } 
                                                                               }); 
} 
}