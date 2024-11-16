import java.util.Random;
import java.util.Scanner;

public class Week7a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        System.out.println("Enter the first number: ");
        int x1 = sc.nextInt();
        System.out.println("Enter the second number: ");
        int x2 = sc.nextInt();
        if (x1 > 0) {
            for (int i = 0; i < 10; i++) {
                int random = rand.nextInt(x2 - x1) + x1;
                System.out.println(random);
            }
        } else {
            System.out.println("The first number must be greater than 0");
        }
        sc.close();
    }
}