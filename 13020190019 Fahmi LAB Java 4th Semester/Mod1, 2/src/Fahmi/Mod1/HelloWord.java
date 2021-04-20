package Fahmi.Mod1;

public class HelloWord { //spertinya modul typo Word(Wor"l"d)
    public HelloWord() {
        System.out.print("Muhammad Fahmi");
        System.out.print("13020190019");
    }

    /*private class HelloWord { //Akan error karna private
        public HelloWord() {
            System.out.print("Muhammad Fahmi");
            System.out.print("13020190019");
        }
    }*/

    public static void main(String[] args) {
        HelloWord hw = new HelloWord();
        System.out.print("Hello Word !!!");
        System.out.print("Nur / 13020140003");
        System.out.print("Ini Pemrograman Java");
        // jika print diubah jd print, maka tdk ada line new
    }
}
