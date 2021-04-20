package Mod2;

public class No2 {
    public static void test() { //procedure
        float a = 6.9f;
        float b = 10;
        float c = a * b;
        System.out.println(c);
    }

    public static String name() { //function
        String name = "Fahmi";
        return name;
    }

    public static void main(String[] args) {
        test();
        System.out.println(name());
    }
}