package Mahasiswa;

import javax.swing.*;
import java.util.HashMap;
import java.util.Scanner;

public class Mahasiswa {

    public static void main(String[] args) {
        HashMap<Integer, String> name = new HashMap<Integer, String>();
        /*Scanner sc = new Scanner(System.in);
        name.put(sc.nextInt(), sc.next());
        name.put(2, " Aarim");*/

        name.put(1, " Petra");
        name.put(2, " Aarim");
        System.out.println("Isi objek name : " + name);
        System.out.println("Asisten urut ke-2 : " + name.get(2));
//        JOptionPane.showInputDialog("Masukkan Nilai");
    }
}
