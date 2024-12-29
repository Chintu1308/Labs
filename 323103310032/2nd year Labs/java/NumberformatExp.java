public class NumberformatExp {
    public static void main(String[] args) {
        int invalid=0;
        int number,count=0;
        for(int i=0;i<args.length;i++){
            try{
                number=Integer.parseInt(args[i]);
                count++;
            }catch(NumberFormatException e){
                invalid++;
                System.out.println("Invalid number: "+args[i]);
                continue;
            }
            count++;
        }
        System.out.println("Number of valid numbers: "+count);
        System.out.println("Number of invalid numbers: "+invalid);
    }
}
