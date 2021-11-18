import java.awt.*;

abstract class Decorator implements Component {

    Component component;
    int x;
    int y;
    int width;
    int height;

    public Decorator(Component component, int x, int y, int width, int height) {
        this.component = component;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

}
