package Fahmi.Mod1;

public class HelloWord { //spertinya modul typo Word(Wor"l"d)
    public HelloWord() {
        System.out.println("Muhammad Fahmi");
        System.out.println("13020190019");
    }

    /*private class HelloWord { //Akan error karna private
        public HelloWord() {
            System.out.println("Muhammad Fahmi");
            System.out.println("13020190019");
        }
    }*/

    public static void main(String[] args) {
        HelloWord hw = new HelloWord();
        System.out.println("Hello Word !!!");
        System.out.println("Nur / 13020140003");
        System.out.println("Ini Pemrograman Java");
    // jika println diubah jd print, maka tdk ada line new
    }
}
