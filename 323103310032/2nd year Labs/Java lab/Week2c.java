import java.util.Scanner;

public class Week2c {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int a[] = new int[n];
        System.out.print("Enter the elements: ");
        for(int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }
        for(int i=0; i<n; i++) {
            int count=1,temp=a[i];
            for(int j=i+1; j<n; j++) {
                if(a[j]==temp) {
                    count++;
                    n--;
                    for(int k=j; k<n; k++) {
                        a[k] = a[k+1];
                    }
                    j--;
                }
            }
            System.out.println(temp+" is repeated "+count+" times");

        }
        for(int i=0; i<n; i++) {
            System.out.print(a[i]+" ");
        }
        sc.close();
    }
}