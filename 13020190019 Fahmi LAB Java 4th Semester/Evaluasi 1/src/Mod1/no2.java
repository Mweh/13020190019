package Mod1;

public class no2 {

    public static void main(String args[]){
        main(69);
        main('f');
        main("Hi Fahmi!");
    }

    public static void main(int i){
        System.out.println("Overloaded main()"+i);
    }

    public static void main(char i){
        System.out.println("Overloaded main()"+i);
    }

    public static void main(String str){
        System.out.println("Overloaded main()"+str);
    }
}