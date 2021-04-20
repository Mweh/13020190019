package Mod1;

public class no4 {
    String name, id;

    public no4(String inputname, String inputid) {
        name = inputname;
        id = inputid;
    }

    public static void main(String[] args) {
        no4 n = new no4("Name: Fahmi", "ID: 13020190019");
        System.out.println(n.name);
        System.out.println(n.id);
    }
}