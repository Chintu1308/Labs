import java.util.Scanner;
import java.util.Vector;

public class Week6b {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter an integer: ");
    Integer i = sc.nextInt();
    System.out.print("Enter a byte: ");
    Byte by = sc.nextByte();
    System.out.print("Enter a short: ");
    Short sh = sc.nextShort();
    System.out.print("Enter a long: ");
    Long l = sc.nextLong();
    System.out.print("Enter a float: ");
    Float f = sc.nextFloat();
    System.out.print("Enter a double: ");
    Double d = sc.nextDouble();
    System.out.print("Enter a character: ");
    Character c = sc.next().charAt(0);
    System.out.print("Enter a string: ");
    String s = sc.next();
    System.out.print("Enter a boolean: ");
    Boolean b = sc.nextBoolean();
    Vector<Object> v = new Vector<>();
    v.add(i);
    v.add(by);
    v.add(sh);
    v.add(l);
    v.add(f);
    v.add(d);
    v.add(c);
    v.add(s);
    v.add(b);
    for(Object item : v) {
      System.out.println(item);
    }
    sc.close();
  }
}
