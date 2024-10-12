import java.util.Scanner;

class Week4b {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter no of Strings: ");
        n = sc.nextInt();
        String str[] = new String[n];
        System.out.print("Enter Strings: ");
        for (int i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        for (int i = 0; i < n; i++) {
            int vow = 0;
            int cons = 0;
            for (int j = 0; j < str[i].length(); j++) {
                char ch = str[i].charAt(j);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vow++;
                } else {
                    cons++;
                }
            }
            System.out.println("Vowel count in " + str[i] + " is " + vow);
            System.out.println("Consonant count in " + str[i] + " is " + cons);
        }
    }
}
