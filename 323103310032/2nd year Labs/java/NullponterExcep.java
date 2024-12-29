public class NullponterExcep {
    static void m1(){
        try{
            throw new NullPointerException("throw demo");
        }
        catch(NullPointerException e){
            System.out.println("Caught inside m1");
            throw e;
        }
    }

    public static void main(String[] args) {
        try{
            m1();
        }
        catch(NullPointerException e){
            System.out.println("Recaught: "+e);
        }
    }
}
