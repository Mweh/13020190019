package mid.soal2;

import java.util.Scanner;

class PersegiPanjang {
    private int p, l;
    Scanner sc = new Scanner(System.in);
    public PersegiPanjang() {
        p = 30;l=20;
    }

    public PersegiPanjang(int p, int l) {
        System.out.println("Input Panjang");
        setP(sc.nextInt());
        System.out.println("Input Lebar");
        setL(sc.nextInt());
    }

    public int getP() {
        return p;
    }

    public void setP(int p) {
        this.p = p;
    }

    public int getL() {
        return l;
    }

    public void setL(int l) {
        this.l = l;
    }

    public int luas() {
        int luas = p*l;
        return luas;
    }

    public int keliling() {
        int keliling = 2*(p+l);
        return keliling;
    }
}