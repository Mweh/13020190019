package Mahasiswa;

public class Utama {
    public static void main(String[] args) {
        Mahasiswa mhs = new Mahasiswa();
        mhs.setNama("Udin");
        mhs.setStb("132020110909");
        System.out.println("Stb : " + mhs.getStb());
        System.out.println("Nama : " + mhs.getNama());
    }
}
