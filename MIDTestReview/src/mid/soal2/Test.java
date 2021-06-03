package mid.soal2;

public class Test {
    public static void main(String[] args) {
        Balok balok1 = new Balok();
        System.out.println("Jika,");
        System.out.println("Panjang = "+balok1.getP());
        System.out.println("Lebar = "+balok1.getL());
        System.out.println("Maka,");
        System.out.println("Luas = "+balok1.luas());
        System.out.println("Keliling = "+balok1.keliling());
        System.out.println("");

        Balok balok2 = new Balok(20,35, 15);

        balok1.setL(5);balok1.setP(25);balok2.setT(10);

        System.out.println("");
        balok2.info();

    }
}