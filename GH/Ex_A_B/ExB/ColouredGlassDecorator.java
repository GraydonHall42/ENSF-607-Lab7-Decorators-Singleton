/* File Name: ColouredGlassDecorator.java
 * Lab # and Assignment #: Lab #7
 * Lab section: 1
 * Completed by: Graydon Hall and Jared Kraus
 * Submission Date: 2021-11-22
 */

package ExB;

import java.awt.*;

public class ColouredGlassDecorator extends Decorator {

    public ColouredGlassDecorator(Component component, int x, int y, int width, int height) {
        super(component, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        component.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        var oldColour = g2d.getColor();
        var oldComposite = g2d.getComposite();
        g2d.setColor(Color.GREEN);
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1 * 0.1f));
        g2d.fillRect(25, 25, 110, 110);
        g2d.setColor(oldColour);
        g2d.setComposite(oldComposite);
    }
}
