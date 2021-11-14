/* File Name: DemoDecoratorPattern.java
 * Lab # and Assignment #: Lab #7
 * Lab section: 1
 * Completed by: Graydon Hall and Jared Kraus
 * Submission Date: 2021-11-22
 */

package ExA;

import javax.swing.*;
import java.awt.*;

public class DemoDecoratorPattern extends JPanel {
	Component t;
	
    public DemoDecoratorPattern(){
   	 t = new Text("Hello World", 60, 80);
   }
	
    public void paintComponent(Graphics g){
 	    int fontSize = 10;
 	    g.setFont(new Font("TimesRoman", Font.PLAIN, fontSize));

 	    // Now lets decorate t with BorderDecorator: x = 30, y = 30, width = 100, and height 100
 	    t = new BorderDecorator(t, 30, 30, 100, 100);

 	    // Now lets add a ColouredFrameDecorator with x = 25, y = 25, width = 110, height = 110,
 		// and thickness = 10.
 	    t = new ColouredFrameDecorator(t, 25, 25, 110, 110, 10);

 	    // Now lets draw the product on the screen
 	    t.draw(g);
    }
	
	public static void main(String[] args) {	
        DemoDecoratorPattern panel = new DemoDecoratorPattern();
        JFrame frame = new JFrame("Learning Decorator Pattern");
        frame.getContentPane().add(panel);
        frame.setSize(400,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
	}
}