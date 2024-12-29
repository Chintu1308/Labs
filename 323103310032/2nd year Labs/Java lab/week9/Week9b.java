import java.util.Scanner;

class CSEDeptException32 extends Exception {}

class Week9b {
    public static void main(String arg[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = s.nextLine();
        System.out.print("Enter roll no: ");
        int rno = s.nextInt();
        System.out.print("Enter branch: ");
        String branch = s.next();
        
        try {
            if (branch.equals("CSE")) {
                System.out.println("Name: " + name + " \nRoll no: " + rno);
            } else {
                throw new CSEDeptException32();
            }
        } catch (CSEDeptException32 e) {
            System.out.println("Exception caught: " + e);
        }
        s.close();
    }
}