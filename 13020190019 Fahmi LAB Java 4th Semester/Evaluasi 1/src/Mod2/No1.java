package Mod2;

public class No1 {
    int oldWeight= 78; // Global Var
    static int addWeight= 10; //Static Var
    public No1() {
        String name = "Fahmi"; //Local Var
        System.out.println(name);
        System.out.println("Old Weight: " + oldWeight + " kg");

    }
    public static void main(String[] args) {
        No1 n = new No1();
        int oldWeight= 78;
        int newWeight = oldWeight+addWeight;

        System.out.println("New Weight: " + newWeight + " kg");
    }
}