/* File Name: Text.java
 * Lab # and Assignment #: Lab #7
 * Lab section: 1
 * Completed by: Graydon Hall and Jared Kraus
 * Submission Date: 2021-11-22s
 */

package ExB;

import java.awt.*;

public class Text implements Component {
    int x;
    int y;
    String text;

    public Text(String text, int x, int y) {
        this.x = x;
        this.y = y;
        this.text = text;
    }

    @Override
    public void draw(Graphics g) {
        var oldColor = g.getColor();
        Color dark_green = new Color(0,102,0);
        g.setColor(dark_green);
        g.drawString(text, x, y);
        g.setColor(oldColor);
    }
}
