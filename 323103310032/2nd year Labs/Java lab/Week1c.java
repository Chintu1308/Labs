import java.util.Scanner;

public class Week1c {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        double a, p, r;
        
        System.out.print("Enter the radius: ");
        r = sc.nextDouble();
        
        a = (3.14) * (r) * (r);
        p = (2) * (3.14) * (r);
        
        System.out.println("The area is " + a);
        System.out.println("The perimeter is " + p);
    }
}
