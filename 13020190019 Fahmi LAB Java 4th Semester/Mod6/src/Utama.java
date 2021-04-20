public class Utama {
    public static void main(String[] args) {
        Segitiga se = new Segitiga();
        se.setBangundatar("Segitiga");
        se.setJumlahisi(3);
        se.setAlas(6);
        se.setTinggi(4);
        se.setLuas(0.5 * se.alas * se.tinggi);
        se.Luas();

        Persegi pe = new Persegi();
        pe.setBangundatar("Persegi");
        pe.setSisi(5);
        pe.setLuas(pe.getSisi() * pe.getSisi());
        pe.setKeliling(4 * pe.getSisi());
        pe.Luas();
        pe.Keliling();
    }
}
