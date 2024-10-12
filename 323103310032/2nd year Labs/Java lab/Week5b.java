class Figure_3d {
    String figure;

    Figure_3d(String figure) {
        this.figure = figure;
    }

    void volume() {
        return;
    }
}

class Cylinder extends Figure_3d {
    double height;
    double radius;

    Cylinder(String figure, double height, double radius) {
        super(figure);
        this.height = height;
        this.radius = radius;
    }

    @Override
    void volume() {
        System.out.println("The shape of the 3d-figure is: " + super.figure);
        double volume = (3.14) * radius * radius * height;
        System.out.println("The volume of the cylinder is " + volume);
    }
}

class Cone extends Figure_3d {
    double height;
    double radius;

    Cone(String figure, double height, double radius) {
        super(figure);
        this.height = height;
        this.radius = radius;
    }

    @Override
    void volume() {
        System.out.println("The shape of the 3d-figure is: " + figure);
        double volume = (3.14) * radius * radius * (height / 3);
        System.out.println("The volume of the cone is " + volume);
    }
}

class Sphere extends Figure_3d {
    double radius;

    Sphere(String figure, double radius) {
        super(figure);
        this.radius = radius;
    }

    @Override
    void volume() {
        System.out.println("The shape of the 3d-figure is: " + figure);
        double volume = (4 / 3.0) * (3.14) * radius * radius * radius;
        System.out.println("The volume of the sphere is " + volume);
    }
}

public class Week5b {
    public static void main(String[] args) {
        Figure_3d arr[] = new Figure_3d[3];
        Cylinder c1 = new Cylinder("CYLINDER_SHAPE", 7, 5);
        arr[0] = c1;
        Cone cn1 = new Cone("CONE_SHAPE", 6, 3);
        arr[1] = cn1;
        Sphere s1 = new Sphere("SPHERE_SHAPE", 5);
        arr[2] = s1;
        for (int i = 0; i < 3; i++) {
            arr[i].volume();
        }
    }
}
