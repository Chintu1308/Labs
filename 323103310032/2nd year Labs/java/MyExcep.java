class MyException extends Exception {
    public MyException(String m) {
        super(m);
    }
}

public class MyExcep {
    public static void main(String[] args) {
        int a=100,b=10000;
        try {
            float c=(float)a/(float)b;
            if(c<0.01) {
                throw new MyException("Number is too small");
            }
        }   catch (Exception e) {
                System.out.print("Exception caught: ");
                System.out.println(e.getMessage());
            }
        
    }
}
