package mid.soal1;

public class TestErr2 {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            int j = 0;
            j += i;
            if (i < j) {
                System.out.print(i + " ");
            } else {
                System.out.print(j + " ");
                do {
                    System.out.println(j++);
                } while (j < 10);
                while (j < 10) ;
                {
                    j++;
                }
                ;
            }
        }
    }
}