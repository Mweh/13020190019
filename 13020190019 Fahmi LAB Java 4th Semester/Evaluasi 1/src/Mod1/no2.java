package Mod1;

public class no2 extends no1{
    String Server = "Ini server Asia";


    public void tambah (){

    }

    public int tambah(int a, int b){
        return a+b;
    }

    public String hanyatest(String nama){
        return nama;
    }

    public no2(){
        System.out.println("aku");
    }

    public no2(String nama){
        System.out.println("Fahmi");
    }

    public static void main(String args[]){
        no1 n1 = new no1();
        no2 n2 = new no2();
        n2.tambah();
        System.out.println(n2.Server);






        new no2("Fahmi");
//        no2 n3 = new no2("test");

        n2.tambah(2, 3);
        n2.tambah(1,2);


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