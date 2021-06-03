import javax.swing.*;
import java.awt.*;

public class ProgramGUISWING2 extends JFrame{
    private JLabel label = new JLabel("Learning");
    private JPanel panel1, panel2;
    private JTextField tf;
    private JTextArea ta;
    public ProgramGUISWING2(){
        initComponents();
    }

    private void initComponents() {
        panel1 = new JPanel(new GridLayout(2, 2));
        panel2 = new JPanel();

        tf=new JTextField(20);
        ta=new JTextArea();
        setSize(500,500);
        panel1.add(label);
        panel2.add(tf);
        panel1.add(panel2);


        panel1.add(new JLabel("This is Java"));
        panel1.add(ta);

        add(panel1);
//        add(new Label("This is Java"));
    }

    public static void main(String[] args) {
        new ProgramGUISWING2().setVisible(true);
        setDefaultLookAndFeelDecorated(true);
    }
}
