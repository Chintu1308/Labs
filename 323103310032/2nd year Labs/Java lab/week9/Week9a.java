import java.util.Scanner;

public class Week9a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the num1: ");
        String num1 = sc.nextLine();
        System.out.print("Enter the num2: ");
        String num2 = sc.nextLine();
        if (num2.equals("0")) {
            System.out.println("Divide by zero");
        } else {
            try {
                int input1 = Integer.parseInt(num1);
                int input2 = Integer.parseInt(num2);
                int result = input1 / input2;
                System.out.println("result of " + input1 + "/" + input2 + " = " + result);
            } catch (NumberFormatException e) {
                System.out.println("Number format exception");
            } catch (ArithmeticException e) {
                System.out.println("Arithmetic exception");
            } finally {
                sc.close();
            }
        }
    }
}
