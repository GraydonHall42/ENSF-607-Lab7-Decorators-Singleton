/* File Name: Decorator.java
 * Lab # and Assignment #: Lab #7
 * Lab section: 1
 * Completed by: Graydon Hall and Jared Kraus
 * Submission Date: 2021-11-22
 */

package ExB;

public abstract class Decorator implements Component {

    protected Component component;
    protected int x;
    protected int y;
    protected int width;
    protected int height;


    public Decorator(Component component, int x, int y, int width, int height) {
        this.component = component;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }



}
