import java.awt.*;

public class GUI extends Frame {
    private Label label = new Label("Learning");
    private Panel panel1, panel2;
    private TextField tf;
    private TextArea ta;
    public GUI(){
        initComponents();
    }

    private void initComponents() {
        panel1 = new Panel(new GridLayout());
        panel2 = new Panel();

        tf=new TextField(20);
        ta=new TextArea();
        setSize(500,500);
        panel1.add(label);
        panel1.add(tf);
        panel1.add(new Label("This is Java"));
        panel1.add(ta);

        add(panel1);
//        add(new Label("This is Java"));
    }

    public static void main(String[] args) {
        new GUI().setVisible(true);
    }
}
