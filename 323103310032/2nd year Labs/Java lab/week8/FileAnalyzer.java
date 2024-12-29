import java.util.Scanner;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
public class FileAnalyzer {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter path of the file to be analyzed: ");
      String filename = sc.nextLine();
      File file = new File(filename);
      if (file.exists()) {
          System.out.println("File name "+file.getName());
          System.out.println("absolute path "+file.getAbsolutePath());
          System.out.println("writeable "+file.canWrite());
          System.out.println("readable "+file.canRead());
          System.out.println("file size in bytes "+file.length());
      }
      else {
          System.out.println("File not found");
      }
      int alphabets = 0;
      int digits = 0;
      int special = 0;

      try(FileInputStream fis = new FileInputStream(filename)){
          int bytedata;
          while((bytedata = fis.read())!=-1){
              if((bytedata >= 'A' && bytedata <= 'Z') || (bytedata >= 'a' && bytedata <= 'z')){
                  alphabets++;
              }
              else if((bytedata >= '0' && bytedata <= '9')){
                  digits++;
              }
              else{
                  special++;
              }
          }
      }
      catch(IOException e){
          System.out.println(e.getMessage());
      }
      System.out.println("Alphabets: " + alphabets);
      System.out.println("Digits: " + digits);
      System.out.println("Special: " + special);

      String outputfilename = "example1.txt";
      try (FileOutputStream fos = new FileOutputStream(outputfilename)) {
          String result = "Alphabets: " + alphabets + "\n" +
                  "Digits: " + digits + "\n" +
                  "Special Characters: " + special + "\n";
          fos.write(result.getBytes());
          System.out.println("Statistics written to " + outputfilename);
      } catch (IOException e) {
          System.out.println("Error writing to the file: " + e.getMessage());
      }

      sc.close();

  }
}
