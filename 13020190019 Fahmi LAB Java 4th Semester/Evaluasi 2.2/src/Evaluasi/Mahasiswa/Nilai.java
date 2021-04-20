package Evaluasi.Mahasiswa;

public class Nilai {
    private int tugas1, tugas2, mid, uas;

    public int setTugas1(int tugas1) {
        this.tugas1 = tugas1;
        return tugas1;
    }

    public int setTugas2(int tugas2) {
        this.tugas2 = tugas2;
        return tugas2;
    }

    public int setMid(int mid) {
        this.mid = mid;
        return mid;
    }

    public int setUas(int uas) {
        this.uas = uas;
        return uas;
    }

    public int getTugas1() {
        return tugas1;
    }

    public int getTugas2() {
        return tugas2;
    }

    public int getMid() {
        return mid;
    }

    public int getUas() {
        return uas;
    }
}