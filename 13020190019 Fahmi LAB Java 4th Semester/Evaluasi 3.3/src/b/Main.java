package b;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList al = new ArrayList();
        GPU g = new GPU();
        g.setGpu1("RTX 3090");
        g.setGpu2("Apple M1's Integrated  GPU");
        al.add(g.getGpu1());
        al.add(g.getGpu2());
        System.out.println(al);
        System.out.println("List of Fahmi's GPU: " + al.size() + " Item");
    }
}