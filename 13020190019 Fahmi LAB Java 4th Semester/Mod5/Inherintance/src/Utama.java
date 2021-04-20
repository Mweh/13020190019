public class Utama {
    public static void main(String[] args) {
        Segitiga se = new Segitiga();
        se.bangundatar = "Segitiga";
        se.jumlahsisi = 3;
        se.alas = 6;
        se.tinggi = 4;
        se.luas = (0.5 * se.alas * se.tinggi);
        se.Luas();
        Persegi pe = new Persegi();
        pe.bangundatar = "Persegi";
        pe.sisi = 4;
        pe.luas = pe.sisi * pe.sisi;
        pe.keliling = 4 * pe.sisi;
        pe.Luas();
        pe.Keliling();

        BangunDatar Bangun = new BangunDatar();
        Bangun.Info();
        se.Info();
        pe.Info();
    }
}
