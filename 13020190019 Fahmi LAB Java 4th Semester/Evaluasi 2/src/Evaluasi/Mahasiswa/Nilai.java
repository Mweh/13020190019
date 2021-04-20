package Evaluasi.Mahasiswa;

public class Nilai {
    private int tugas1 = 6, tugas2 =7;
    private int mid = 8, uas = 9;

    public void setTugas1(int tugas1) {
        this.tugas1 = tugas1;
    }

    public void setTugas2(int tugas2) {
        this.tugas2 = tugas2;
    }

    public void setMid(int mid) {
        this.mid = mid;
    }

    public void setUas(int uas) {
        this.uas = uas;
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