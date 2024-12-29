import java.util.Scanner;
class Deposit {
  Scanner sc = new Scanner(System.in);
  int MINBALANCE = 1000;
  int total_amount;
  public void depositAmount(){
    System.out.print("enter the amount to be deposited: ");
    int dep_amount = sc.nextInt();
    total_amount = dep_amount + MINBALANCE;
    System.out.println("deposited succesfully");
    System.out.println("the total amount in you account is: "+total_amount);
  }
}
class Withdrawl extends Deposit{
  Scanner sc = new Scanner(System.in);
  public void withdrawAmount(){
    System.out.print("Enter the amount to be withdrawl: ");
    int wid_amount = sc.nextInt();
    total_amount  = MINBALANCE - wid_amount;
    if(total_amount<0){
      System.out.println("you dont have enough money to withdrawl");
    }
    else if(total_amount==0){
      System.out.println("the amount in your account is zero");
    }
    else{
      System.out.println("amount withdrawl succefully");
      System.out.println("the remaining amount in your account is: "+total_amount);
    }
  }
}
class CheckBalance extends Withdrawl {
  public void checkAmount(){
    System.out.println("the amount in your account is: "+MINBALANCE);
  }
}
interface minAmount{
  void display_min();
}
 class GetDetails extends CheckBalance implements minAmount{
    @Override //Indicates that this method is implementing the interface's method
    public void display_min(){
      System.out.println("your amount in your account is: "+MINBALANCE);
    }
}
public class Multipleinherit{
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.println("welcome to the Banking Application, Good Morning");
      System.out.println("choose the option");
      System.out.println("1. deposit");
      System.out.println("2. withdraw");
      System.out.println("3. check balance");
      System.out.println("4. exit");
      int option = sc.nextInt();
      GetDetails user1 = new GetDetails();
      user1.display_min();
      switch(option) {
        case 1 -> {
          user1.depositAmount();
          break;
        }
        case 2 ->{
          user1.withdrawAmount();
          break;
        }
        case 3 ->{
        user1.checkAmount();
        break;
        }
        case 4 ->{
          System.exit(0);
        }
        default ->{
          System.out.println("invalid choice");
      }
    }
    sc.close();
  }
}
