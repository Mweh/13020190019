package Mahasiswa;

import java.util.ArrayList;

public class Gudang {
    public static void main(String[] args) {
        ArrayList<String> barang = new ArrayList<>();
        barang.add("Monitor");
        barang.add("Keyboard");
        barang.add("Meja");
        barang.remove("Meja");
        System.out.println(barang);
        System.out.println("isi Gudang Sebanyak " + barang.size() + " item");
    }
}