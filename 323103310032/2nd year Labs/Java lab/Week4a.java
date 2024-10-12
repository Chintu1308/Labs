import java.util.Scanner;
import java.util.Arrays;

public class Week4a {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1;
        int n;
        int count = 0;

        System.out.print("Enter the string: ");
        s1 = sc.next();

        System.out.print("Enter the number of letters you want in substring: ");
        n = sc.nextInt();

        System.out.println("The substrings containing " + n + " letters each are: ");
        for (int i = 0; i < (s1.length() / n) + 1; i++) {
            StringBuffer s2 = new StringBuffer();
            for (int j = 0; j < n && count < s1.length(); j++) {
                s2.append(s1.charAt(count));
                count++;
            }
            String s3 = s2.toString();
            char arr[] = s3.toCharArray();
            Arrays.sort(arr);
            String s4 = new String(arr);
            System.out.println(s4);
        }
        sc.close();
    }
}
