public class MultiException {
    public static void main(String[] args) {
        int a[]={10,20};
        int b=10;
        try{
            int x=a[2]/(b-a[1]);
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic Exception");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array Index Out of Bounds Exception");
        }
        catch(ArrayStoreException e){
            System.out.println("Array Store Exception");
        }
    }
}
