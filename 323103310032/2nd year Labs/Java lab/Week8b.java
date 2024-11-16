/*Write a program that reads a CSV file containing a super market data containing product ID, Name, Cost and Quantity of sales and calculate the total revenue of the supermarket also sort the products in the order of their demand. */

import java.io.FileReader;
import java.io.BufferedReader;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Product {
    String id;
    String name;
    double cost;
    int quantity;

    public Product(String id, String name, double cost, int quantity) {
        this.id = id;
        this.name = name;
        this.cost = cost;
        this.quantity = quantity;
    }

    public double getRevenue() {
        return cost * quantity;
    }
}

public class Week8b {
    public static void main(String[] args) {
        ArrayList<Product> products = new ArrayList<>();
        double totalRevenue = 0;

        try (BufferedReader br = new BufferedReader(new FileReader("c:/Users/bhhc1/Desktop/Hari Hara Charan/323103310032/2nd year Labs/Java lab/shop.csv"))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] values = line.split(",");
                if (values.length == 4) {
                    try {
                        String id = values[0];
                        String name = values[1];
                        double cost = Double.parseDouble(values[2]);
                        int quantity = Integer.parseInt(values[3]);
                        Product product = new Product(id, name, cost, quantity);
                        products.add(product);
                        totalRevenue += product.getRevenue();
                    } catch (NumberFormatException e) {
                        System.err.println("Error parsing line: " + line);
                    }
                } else {
                    System.err.println("Malformed line: " + line);
        try (BufferedWriter bw = new BufferedWriter(new FileWriter("c:/Users/bhhc1/Desktop/Hari Hara Charan/323103310032/2nd year Labs/Java lab/sorted_supermarket_data.csv"))) {
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

        Collections.sort(products, Comparator.comparingInt(p -> -p.quantity));

        try (BufferedWriter bw = new BufferedWriter(new FileWriter("src/sorted_supermarket_data.csv"))) {
            bw.write("ID,Name,Cost,Quantity,Revenue\n");
            for (Product product : products) {
                bw.write(product.id + "," + product.name + "," + product.cost + "," + product.quantity + "," + product.getRevenue() + "\n");
            }
            bw.write("Total Revenue:," + totalRevenue + "\n");
        } catch (Exception e) {
            e.printStackTrace();
        }

        System.out.println("Total Revenue: " + totalRevenue);
    }
}