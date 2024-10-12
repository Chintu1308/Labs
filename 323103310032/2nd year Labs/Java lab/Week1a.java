import java.util.Scanner;

public class Week1a {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1, s2;
        System.out.print("Enter the first string: ");
        s1 = sc.next();
        System.out.print("Enter the second string: ");
        s2 = sc.next();
        System.out.print(s1+" and "+s2);
        sc.close();
    }
}