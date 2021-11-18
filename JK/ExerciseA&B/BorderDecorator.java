import java.awt.*;

public class BorderDecorator extends Decorator {

    public BorderDecorator(Component component, int x, int y, int width, int height) {
        super(component, x, y, width, height);
    }

    public void draw(Graphics g){
        component.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        Stroke dashed = new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[]{9}, 0);
        g2d.setStroke(dashed);
        g2d.drawRect(x, y, width, height);
    }
}
