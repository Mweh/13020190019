package tugas1oop;
//13020190019 Muhammad Fahmi
/* Contoh pengoperasian variabel bertype dasar */
public class Oprator {
    /**
     * @param args
     */
    public static void main(String[] args) {
// TODO Auto-generated method stub
        /* Kamus */
        boolean Bool1, Bool2, TF ; int i,j, hsl ;
        float x,y,res;

        /* algoritma */ //13020190019 Muhammad Fahmi
        System.out.println ("Silahkan baca teksnya dan tambahkan perintah untuk menampilkan output");
        Bool1 = true; Bool2 = false;
        TF = Bool1 && Bool2 ; /* Boolean AND */
        System.out.println("Logikal Operators true AND false = " + (Bool1  && Bool2));
        TF = Bool1 || Bool2 ; /* Boolean OR */
        System.out.println("Logikal Operators true OR false = " + (Bool1  || Bool2));
        TF = ! Bool1 ; /* NOT */
        System.out.println("Logikal Operators NOT true = " + (! Bool1));
        TF = Bool1 ^Bool2; /* XOR */
        System.out.println("Logikal Operators true XOR false= " + (Bool1 ^Bool2));

        /* operasi numerik */ i = 5; j = 2 ; System.out.println("\ni = 5 dan j = 2");
        hsl = i+j; System.out.println("Arithmetic  Operators i Addition j, = " + (i+j));
        hsl = i - j; System.out.println("Arithmetic  Operators i Subtraction j, = " + (i-j));
        hsl = i / j; System.out.println("Arithmetic  Operators i Division j, = " + (i/j));
        hsl = i * j; System.out.println("Arithmetic  Operators i Multiplication j, = " + (i*j));
        hsl = i /j ; /* pembagian bulat */ //comment by fahmi, soal terulang dr atas
        hsl = i%j ; /* sisa. modulo */
        System.out.println("Operators i Modulus j, = " + (i%j));
        /* operasi numerik */ //comment by fahmi, operasi sama tp angka beda, terulang
        x = 5 ; y = 5 ; System.out.println("\nx = 5 dan y = 5");
        res = x + y; System.out.println("Arithmetic  Operators x Addition y, = " + (x+y));
        res = x - y; System.out.println("Arithmetic  Operators x Subtraction y, = " + (x-y));
        res = x / y; System.out.println("Arithmetic  Operators x Division y, = " + (x/y));
        res = x * y; System.out.println("Arithmetic  Operators x Multiplication y, = " + (x*y));

        /* operasi relasional numerik */ System.out.println("\ni = 5 dan j = 2");
        TF = (i==j); System.out.println("Comparison Operators i Equal to j, = " + (i==j));
        TF = (i!=j); System.out.println("Comparison Operators i Not equal to j, = " + (i!=j));
        TF = (i < j); System.out.println("Comparison Operators i Less than to j, = " + (i<j));
        TF = (i > j); System.out.println("Comparison Operators i Greater than to j, = " + (i>j));
        TF = (i <= j); System.out.println("Comparison Operators i Less than or equal to j, = " + (i<=j));
        TF = (i >= j);System.out.println("Comparison Operators i Greater than or equal to j, = " + (i>=j));
        /* operasi relasional numerik */ System.out.println("\nx = 5 dan y = 5");
        TF = (x != y); System.out.println("Comparison Operators x Not Equal to y, = " + (x!=y));
        TF = (x < y); System.out.println("Comparison Operators x Less than to y, = " + (x<y));
        TF = (x > y); System.out.println("Comparison Operators x Greater than to y, = " + (x>y));
        TF = (x <= y); System.out.println("Comparison Operators x Less than or equal to y, = " + (x<=y));
        TF = (x >= y); System.out.println("Comparison Operators x Greater than or equal to y, = " + (x>=y));
    }
}