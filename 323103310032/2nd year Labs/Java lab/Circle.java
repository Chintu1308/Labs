import java.util.Scanner;

public class Circle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a, p,r;
        System.out.println("Enter the radius of the circle:");
        r = sc.nextDouble();
        a = 3.14 * r * r;
        p = 2 * 3.14 * r;
        System.out.println("Area of the circle is: " + a);
        System.out.println("Perimeter of the circle is: " + p);
        sc.close();
    }
}