import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int weight, see;
        Scanner sc = new Scanner(System.in);
        IdealWeight iw = new IdealWeight();
        Weight w = new Weight();

        System.out.print("Input Your Weight(in kg): ");
        weight = sc.nextInt();
        System.out.print("Input Your Height(in cm): ");
        w.setHeight(sc.nextInt());
        System.out.println("1. Your Weight");
        System.out.println("2. Your Recommended Weight by Fahmi");
        System.out.println("Choose number betweeen 1 or 2 above: ");
        see = sc.nextInt();
        if (see == 1) {
            System.out.print("Your Weight: " + weight + " kg");
        } else if (see == 2) {
            System.out.print(w.ideal());
        }
    }
}
