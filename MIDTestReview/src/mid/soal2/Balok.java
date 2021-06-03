package mid.soal2;

class Balok extends PersegiPanjang{
    private int t;
    public Balok() {
        setT(15);
    }
    public Balok(int p, int l, int t) {
        System.out.println("Input Panjang: ");
        setP(sc.nextInt());
        System.out.println("Input Lebar: ");
        setL(sc.nextInt());
        System.out.println("Input Tinggi:");
        setT(sc.nextInt());
        System.out.println("Tingginya 10 karna sdh di set 10 pd main class");
    }

    public int getT() {
        return t;
    }

    public void setT(int t) {
        this.t = t;
    }
    public int volume(){
        int volume = getP()*getL()*getT();
        return volume;
    }
    public void info(){
        System.out.println("Panjang = "+getP());
        System.out.println("Lebar = "+getL());
        System.out.println("Tinggi = "+getT());
        System.out.println("Luas = "+luas());
        System.out.println("Volume = "+volume());
    }
}