public class BangunDatar {
    private int jumlahisi;
    private double luas, keliling;
    private String bangundatar;

    protected void info() {
        System.out.println("Ini bangun datar");
    }

    protected void Luas() {
        System.out.println("Luas " + bangundatar + " = " + luas);
    }

    protected void Keliling() {
        System.out.println("Keliling " + bangundatar + " = " + keliling);
    }

    protected void Luas(int sisi) {
        luas = sisi * sisi;
        System.out.println("Luas persegi : " + luas);
    }

    protected void Luas(int a, int t) {
        luas = a * t * 0.5;
        System.out.println("Luas Segitiga : " + luas);
    }

    public void setBangundatar(String bangundatar) {
        this.bangundatar = bangundatar;
    }

    public void setJumlahisi(int jumlahisi) {
        this.jumlahisi = jumlahisi;
    }

    public void setKeliling(double keliling) {
        this.keliling = keliling;
    }

    public void setLuas(double luas) {
        this.luas = luas;
    }

    public int getJumlahisi() {
        return jumlahisi;
    }

    public double getLuas() {
        return luas;
    }

    public String getBangundatar() {
        return bangundatar;
    }

    public double getKeliling() {
        return keliling;
    }
}

