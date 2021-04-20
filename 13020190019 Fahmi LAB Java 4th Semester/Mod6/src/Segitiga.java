public class Segitiga extends BangunDatar {
    int alas, tinggi;
    private int jumlahsisi;

    public void setAlas(int alas) {
        this.alas = alas;
    }

    public void setTinggi(int tinggi) {
        this.tinggi = tinggi;
    }

    public int getJumlahisi() {
        return super.getJumlahisi();
    }

    public int getAlas() {
        return alas;
    }

    public int getTinggi() {
        return tinggi;
    }

    public int getJumlahsisi() {
        return jumlahsisi;
    }

    protected void info() {
        System.out.println("ini bangun segitiga");
    }

}
