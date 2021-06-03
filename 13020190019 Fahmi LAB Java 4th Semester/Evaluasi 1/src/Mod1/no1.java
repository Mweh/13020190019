package Mod1;

import java.util.Scanner;

public class no1 {
    private String Server = "Ini server Europe";


    /*public void setServer(){
        String Server;
    }

    public String getServer(){
        return Server;
    }*/

    public String getServer() {
        return Server;
    }

    public void setServer(String Server) {
        this.Server = Server;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        no1 a = new no1();
        a.setServer(sc.nextLine());
//        System.out.println(a.getServer());


        if (a.getServer().equals("Fahmi")) {
            System.out.println(a.getServer());
        } else {
            System.out.println("Tidak Valid");
        }

        for (int i = 0; i <= 5; i++) {
            System.out.println(a.getServer());
        }

        /*System.out.println(a.setServer(sc.nextLine()));

        System.out.println(sc.nextLine(Server));

        User = "Fahmi";
        a.Server = "Asia";
        System.out.println("User: " + User);
        System.out.println("Server: " + a.Server);
        System.out.println("");

        no1 b = new no1();
        User = "Mweh";
        b.Server = "Europe";
        System.out.println("User: " + User);
        System.out.println("Server: " + b.Server);*/
    }
}