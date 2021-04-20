package ContohJoptionPane;

import javax.swing.JOptionPane;

public class LuasSegitiga {
    public double luas(int alas, int tinggi) {
        return (0.5 * alas * tinggi);
    }

    public static void main(String[] args) {
        LuasSegitiga ls = new LuasSegitiga();
        String a, t;
        int alas, tinggi;
        a = JOptionPane.showInputDialog("Masukkan Alas Segitiga : ");
        t = JOptionPane.showInputDialog("Masukkan Tinggi Segitiga : ");
        alas = Integer.parseInt(a);
        tinggi = Integer.parseInt(t);
        JOptionPane.showMessageDialog(null, ls.luas(alas, tinggi));
    }
}


