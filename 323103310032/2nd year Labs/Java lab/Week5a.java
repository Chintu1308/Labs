class Vehicle{
    String type;
    Vehicle(String type){
        this.type = type;
    }
}

class Brand extends Vehicle{
    String brand;
    Brand(String type, String brand){
        super(type);
        this.brand = brand;
    }
}

class Cost extends Brand{
    int cost;
    Cost(String type, String brand, int cost){
        super(type, brand);
        this.cost = cost;
    }
    void display(){
        System.out.println("Type: "+type);
        System.out.println("Brand: "+brand);
        System.out.println("Cost: "+cost);
    }
}



public class Week5a {
    public static void main(String[] args) {
        Cost c1 = new Cost("Sidan", "BMW", 5000000);
        c1.display();
    }
}