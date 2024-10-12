import java.util.Scanner;

class Circle {
    float radius;
    float area(){
        return 3.14f*radius*radius;
    }

    float circumference(){
        return 2*3.14f*radius;
    }
}

class Exp1a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);   
        Circle c = new Circle();
        c.radius = sc.nextFloat();
        System.out.println("Area of circle: "+c.area());
        System.out.println("Circumference of circle: "+c.circumference());
        sc.close();
    }
}