import java.awt.*;

public class Text implements Component {

    private int x;
    private int y;
    private String text;

    public Text(String text, int x, int y) {
        this.x = x;
        this.y = y;
        this.text = text;
    }

    @Override
    public void draw(Graphics g) {
        Color oldColor = g.getColor();
        Color darkGreen = new Color(0, 102, 0);
        g.setColor(darkGreen);
        g.drawString(text, x, y);
        g.setColor(oldColor);
    }
}
