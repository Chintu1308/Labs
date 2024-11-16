class Rectangle {
    double length, breadth;
    Rectangle() {
        length = 1.25;
        breadth = 4.05;
    }
    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    double Area() {
        return length * breadth;
    }
}

class Week2a {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        Rectangle r2 = new Rectangle(2.54, 4);
        System.out.println("Area of rectangle 1: " + r1.Area());
        System.out.println("Area of rectangle 2: " + r2.Area());
    }
}