package Evaluasi;

import Evaluasi.HitungNilai.HitungNilaiAkhir;
import Evaluasi.Mahasiswa.Identitas;
import Evaluasi.Mahasiswa.Nilai;

import javax.swing.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Utama {
    public static void main(String[] args) throws IOException {
        Identitas mhs = new Identitas();
        HitungNilaiAkhir hna = new HitungNilaiAkhir();
        Nilai n = new Nilai();
        double na = 0, tugas = 0;
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        mhs.setNama(sc.nextLine());
        mhs.setStambuk(sc.nextLine());

        int a = n.setTugas1(Integer.parseInt(br.readLine()));
        int b = n.setTugas2(Integer.parseInt(br.readLine()));
        int m = n.setMid(Integer.parseInt(br.readLine()));
        int u = n.setUas(Integer.parseInt(br.readLine()));
        int c = (int) hna.nilaiTugas(a, b);

        JOptionPane.showMessageDialog(null, mhs.getNama() + " = Nama saya.");
        JOptionPane.showMessageDialog(null, mhs.getStambuk() + " = Stb saya.");
        JOptionPane.showMessageDialog(null, hna.nilaiTugas(a, b) + " = Nilai Tugas.");
        JOptionPane.showMessageDialog(null, n.getMid() + " = Nilai MID." );
        JOptionPane.showMessageDialog(null, n.getUas() + " = Nilai UAS." );
        JOptionPane.showMessageDialog(null, hna.nilaiAkhir(c, m, u) + " = Nilai Akhir." );
    }
}