public class Throwdemo {

    static void t1() throws IllegalAccessException {
        System.out.println("Inside t1");
        throw new IllegalAccessException("demo");
    }
    public static void main(String[] args) {
        try {
            t1();
        } catch (IllegalAccessException e) {
            System.out.println("Caught " + e);
        }
    }
}
