import java.util.*;

public class Week4c {
    public static void main(String args[]) {
        String s1 = new String();
        String s2 = new String();
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter the first string: ");
        s1 = sc.next();
        
        System.out.print("Enter the second string: ");
        s2 = sc.next();
        
        if (s1.length() == s2.length()) {
            char s1ar[] = s1.toCharArray();
            char s2ar[] = s2.toCharArray();
            Arrays.sort(s1ar);
            Arrays.sort(s2ar);
            
            int count = 0;
            for (int i = 0; i < s1.length(); i++) {
                if (s1ar[i] == s2ar[i]) {
                    count++;
                }
            }
            
            if (count == s1.length()) {
                System.out.println("The strings are anagrams");
            } else {
                System.out.println("The strings are not anagrams");
            }
        } else {
            System.out.println("The strings are not anagrams");
        }
        sc.close();
    }
}
