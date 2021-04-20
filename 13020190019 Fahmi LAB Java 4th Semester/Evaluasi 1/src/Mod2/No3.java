package Mod2;

public class No3 {
    static void name() { //nonparameter
        System.out.println("Fahmi");
    }

    static void id(String id) { //parameter
            System.out.println(id + " kg");
    }

    public static void main(String[] args) {
        name();
        id("Old: 68");
        id("New: 78");
    }
}
