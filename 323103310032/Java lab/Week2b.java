import java.util.Scanner;

public class Week2b {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no of elements: ");
        int n = sc.nextInt();

        int[] a = new int[n];
        int count = 0, flag = 0;

        System.out.print("Enter the array elements: ");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    count++;
                }
            }
            if (count == 2 && a[i] % 2 == 1) {
                System.out.print(a[i] + " ");
                flag++;
            }
            count = 0;
        }

        if (flag == 0) {
            System.out.print("Not Found");
        }
        sc.close();
    }
}
