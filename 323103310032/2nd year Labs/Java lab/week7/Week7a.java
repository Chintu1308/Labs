import java.util.Random;
import java.util.Scanner;
public class Week7a {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      Random rand = new Random();
      System.out.print("Enter the value of x1 (x1>0): ");
      int x1 = sc.nextInt();
      if(x1 < 0){
          System.out.println("x1 must be grater than 0");
      }
      System.out.print("Enter the value of x2 : ");
      int x2 = sc.nextInt();
      if(x2 < x1){
          System.out.print("x2 must be grater than x1");
          sc.close();
          return;
      }
      System.out.print("How many random numbers do you want to generate: ");
      int count = sc.nextInt();
      System.out.print("Generate random numbers between "+ x1 + " and " + x2 + ": ");
      for(int i = 0; i < count; i++) {
          int x = rand.nextInt(x2-x1+1) + x1;
          System.out.print(" " + x);
      }
      sc.close();
  }
}