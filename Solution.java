import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Fabric {
    int id;
    String name;
    int availableStock;
    double price;

    Fabric(int id, String name, int availableStock, double price) {
        this.id = id;
        this.name = name;
        this.availableStock = availableStock;
        this.price = price;

    }

    public void setId(int id) {
        this.id = id;
    }

    public void setname(String name) {
        this.name = name;
    }

    public void setavaialbleStock(int availableStock) {
        this.availableStock = availableStock;
    }

    public void setprice(double price) {
        this.price = price;
    }

}

public class Solution {
    public static void main(String args[]){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        Fabric[] f = new Fabric[n];
        for (int i = 0; i < n; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String name = sc.nextLine();
            int availableStock = sc.nextInt();
            sc.nextLine();
            double price = sc.nextDouble();
            sc.nextLine();

            f[i] = new Fabric(id, name, availableStock, price);

        }

        String nm = sc.nextLine();

        Fabric fm = findFabricWithMaximumPrice(f);
        if (fm != null) {
            System.out.println("id-" + fm.id);
            System.out.println("name-" + fm.name);
            System.out.println("availableStock-" + fm.availableStock);
            System.out.println("price-" + fm.price);
        } else {
            System.out.println("No Fabric found with mentioned attribute.");
        }

        Fabric fn = searchFabricByName(f, nm);
        if (fn != null) {
            System.out.println("id-" + fn.id);
            System.out.println("name-" + fn.name);
            System.out.println("availableStock-" + fn.availableStock);
            System.out.println("price-" + fn.price);
        } else {
            System.out.println("No Fabric found with mentioned attribute.");
        }
    }

    public static Fabric findFabricWithMaximumPrice(Fabric[] f) {
        if(f.length==0){
            return null;
        }
        int l = f.length;
        double mp = f[0].price;
        Fabric ans = null;
        for (int i = 0; i < l; i++) {
            if (f[i].price >= mp) {
                ans = f[i];

            }

        }
        return ans;
    }

    public static Fabric searchFabricByName(Fabric[] f, String nm) {
        int l = f.length;
        for (int i = 0; i < l; i++) {
            if (nm.equals(f[i].name)) {
                return f[i];
            }

        }
        return null;
    }
}