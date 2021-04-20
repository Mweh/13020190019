package a;

import java.util.Scanner;
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<Integer, String> gpu = new HashMap<Integer, String>();
        String gpu1, gpu2;
        System.out.print("1st Graphic Card: ");
        gpu1 = sc.nextLine();
        System.out.print("2nd Graphic Card: ");
        gpu2 = sc.nextLine();
        gpu.put(1, gpu1);
        gpu.put(2, gpu2);
        System.out.println("List of Fahmi's GPU: " + gpu);
    }
}