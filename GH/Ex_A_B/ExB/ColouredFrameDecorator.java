/* File Name: ColouredFrameDecorator.java
 * Lab # and Assignment #: Lab #7
 * Lab section: 1
 * Completed by: Graydon Hall and Jared Kraus
 * Submission Date: 2021-11-22
 */

package ExB;

import java.awt.*;

public class ColouredFrameDecorator extends Decorator {
    private int thickness;

    public ColouredFrameDecorator(Component component, int x, int y, int width, int height, int t) {
        super(component, x, y, width, height);
        this.thickness = t;
    }

    @Override
    public void draw(Graphics g) {
        component.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        var oldStroke = g2d.getStroke();
        var oldColour = g2d.getColor();
        g2d.setStroke(new BasicStroke(thickness));
        g2d.setColor(Color.RED);
        g2d.drawRect(x, y, width, height);
        g2d.setStroke(oldStroke);
        g2d.setColor(oldColour);
    }
}
