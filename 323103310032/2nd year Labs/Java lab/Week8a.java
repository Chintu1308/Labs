/*Write a program that reads file name from the user then displays information about that file, also read the contents from the file in byte stream to count the number of alphabets, numeric values, and special symbols. Write these statistics into another file using byte streams*/
import java.io.File;
import java.util.Scanner;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Week8a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the file name: ");
        String fileName = sc.nextLine();
        File file = new File(fileName);
        
        if (file.exists()) {
            System.out.println("File name: " + file.getName());
            System.out.println("Absolute path: " + file.getAbsolutePath());
            System.out.println("Writeable: " + file.canWrite());
            System.out.println("Readable: " + file.canRead());
            System.out.println("File size in bytes: " + file.length());
            int alphabets = 0, numbers = 0, specialChars = 0;
            try (FileInputStream fis = new FileInputStream(file)) {
                int byteContent;
                while ((byteContent = fis.read()) != -1) {
                    char ch = (char) byteContent;
                    if (Character.isLetter(ch)) {
                        alphabets++;
                    } else if (Character.isDigit(ch)) {
                        numbers++;
                    } else {
                        specialChars++;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }

            System.out.println("Number of alphabets: " + alphabets);
            System.out.println("Number of numeric values: " + numbers);
            System.out.println("Number of special symbols: " + specialChars);

            // Writing statistics to another file
            try (FileOutputStream fos = new FileOutputStream("file_statistics.txt")) {
                String stats = "Number of alphabets: " + alphabets + "\n" +
                               "Number of numeric values: " + numbers + "\n" +
                               "Number of special symbols: " + specialChars + "\n";
                fos.write(stats.getBytes());
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else {
            System.out.println("File does not exist");
        }
        sc.close();
    }
}
