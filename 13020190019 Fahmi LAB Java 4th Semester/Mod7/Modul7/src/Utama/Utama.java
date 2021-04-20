package Utama;

import java.util.Scanner;

import Interface.DataPraktikan;
import Abstarct.InputNilai;
import Interface.ProsesNilaiPraktikum;

import java.time.temporal.TemporalAdjusters;


public class Utama extends InputNilai implements DataPraktikan, ProsesNilaiPraktikum {
    String nama, stb, praktikum;
    Scanner sc;

    public Utama() {
        sc = new Scanner(System.in);
    }

    @Override
    public void inputNilaiAcc() {
        acc1 = sc.nextInt();
        acc2 = sc.nextInt();
        acc3 = sc.nextInt();
        acc4 = sc.nextInt();
    }

    @Override
    public void inputNilaiUjian() {
        mid = sc.nextInt();
        uas = sc.nextInt();
    }

    @Override
    public void InputNamaStb() {
        nama = sc.next();
        stb = sc.nextLine();
        System.out.println(nama + stb);
    }

    @Override
    public void InputPraktikum() {
        praktikum = sc.next();
    }

    @Override
    public float nilaiTugas1() {
        return (acc1 + acc2) / 2;
    }

    @Override
    public float nilaiTugas2() {
        return (acc3 + acc4) / 2;
    }

    @Override
    public float nilaiAkhir(float tugas1, float tugas2, float mid, float uas) {
        return (((tugas1 + tugas2) / 2) * 0.3f) + (mid * 0.3f) + (uas * 0.4f);
    }

    public static void main(String[] args) {
        Utama ut = new Utama();

        ut.InputNamaStb();
        ut.InputPraktikum();
        ut.inputNilaiAcc();
        ut.inputNilaiUjian();
        float tugas1 = ut.nilaiTugas1();
        float tugas2 = ut.nilaiTugas2();
        float na = ut.nilaiAkhir(tugas1, tugas2, ut.mid, ut.uas);
        System.out.println("Nilai Akhir : " + na);

    }

}
    
    
  
    

