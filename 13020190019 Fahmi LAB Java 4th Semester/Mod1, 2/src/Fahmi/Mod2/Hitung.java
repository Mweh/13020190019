package Fahmi.Mod2;

public class Hitung {
    String nama, stb;

    public Hitung() {
        nama = "Ismail";
        stb = "13020100101";
    }

    public float tambah(int nilai1, int nilai2) {
        return nilai1 + nilai2;
    }

    public float selisih(int nilai1, int nilai2) {
        return nilai2 - nilai1;
    }

    public float kali(int nilai1, int nilai2) {
        return nilai1 * nilai2;
    }

    public float bagi(int nilai1, int nilai2) {
        return nilai1 / nilai2;
    }

    public void tampilNama() {
        System.out.println("Nama : " + nama);
        System.out.println("Stb  : " + stb);
    }

    public static void main(String[] args) {
        Hitung h = new Hitung();
        int nilai1, nilai2;
        nilai1 = 10;
        nilai2 = 5;
        String pilihan = "tambah";
        if (pilihan.equals("tambah")) {
            System.out.println(nilai1 + " + " + nilai2 + " = " + h.tambah(nilai1, nilai2));
        } else if (pilihan.equals("selisih")) {
            System.out.println(nilai2 + " - " + nilai1 + " = " + h.selisih(nilai2, nilai1));
        } else if (pilihan.equals("kali")) {
            System.out.println(nilai1 + " * " + nilai2 + " = " + h.kali(nilai1, nilai2));
        } else if (pilihan.equals("bagi")) {
            System.out.println(nilai1 + " / " + nilai2 + " = " + h.bagi(nilai1, nilai2));
        } else {
            System.out.println("Tidak ada pilihan !");
        }
        System.out.println("--------------------------------------");
        h.tampilNama();
    }
}