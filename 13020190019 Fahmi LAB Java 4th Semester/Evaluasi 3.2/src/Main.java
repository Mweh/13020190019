import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        begin r = new begin();
        doing m = new doing();
        int a, b, c;

        r.Todo();r.morning();m.meditation();m.sleep();
        System.out.println("Input Nilai a: ");
        a = sc.nextInt();
        System.out.println("Input Nilai b: ");
        b = sc.nextInt();
        c = a*b;
        System.out.println("Nilai a x b adalah " + c);
    }
}
