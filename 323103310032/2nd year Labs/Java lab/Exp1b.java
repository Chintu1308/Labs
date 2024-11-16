import java.util.Scanner;

class rect {
    int length;
    int breadth;
    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }

    class Exp1b {
        
        public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);
            rect c = new rect();


            System.out.print("Enter the length of the rectangle: ");
            c.length = sc.nextInt();
            System.out.print("Enter the breadth of the rectangle: ");
            c.breadth = sc.nextInt();

            System.out.println("Area of the rectangle: " + c.area());
            System.out.println("Perimeter of the rectangle: " + c.perimeter());
            sc.close();
        }
    }
}