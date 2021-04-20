package Evaluasi;

import Evaluasi.HitungNilai.HitungNilaiAkhir;
import Evaluasi.Mahasiswa.Identitas;
import Evaluasi.Mahasiswa.Nilai;

public class Utama {
    public static void main(String[] args) {
        double na = 0, tugas = 0;
        Identitas mhs = new Identitas();
        HitungNilaiAkhir hna = new HitungNilaiAkhir();
        Nilai n = new Nilai();
        System.out.println("Nama: " + mhs.getNama());
        System.out.println("Stb: " + mhs.getStambuk());
        System.out.println("Tugas: " + hna.nilaiTugas());
        System.out.println("MID: " + n.getMid());
        System.out.println("UAS: " + n.getUas());
        System.out.println("NA: " + hna.nilaiTugas());
    }
}