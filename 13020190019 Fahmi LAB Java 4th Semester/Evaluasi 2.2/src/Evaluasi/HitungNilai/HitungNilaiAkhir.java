package Evaluasi.HitungNilai;

import Evaluasi.Mahasiswa.Nilai;

public class HitungNilaiAkhir {
    Nilai n = new Nilai();
    double tugas1 = n.getTugas1();
    double tugas2 = n.getTugas2();
    double mid = n.getMid();
    double uas = n.getUas();

    public double nilaiTugas(double tugas1, double tugas2) {
        return ((tugas1 + tugas2) / 2);
    }

    double tugas = nilaiTugas(tugas1, tugas2);

    public double nilaiAkhir(double tugas, int mid, int uas) {
        return ((tugas * 0.4) + (mid * 0.3) + (uas * 0.3));
    }
}