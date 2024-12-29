import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Week8c {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the file name containing technical content: ");
        File techFile = new File(s.next());
        System.out.print("Enter the file name containing stop words: ");
        File stopWordsFile = new File(s.next());

        ArrayList<String> stopWords = new ArrayList<>();
        ArrayList<String> techWords = new ArrayList<>();
        try (BufferedReader f2 = new BufferedReader(new FileReader(stopWordsFile))) {
            String line;
            while ((line = f2.readLine()) != null) {
                for (String x : line.split("\\s+")) {
                    stopWords.add(x.toLowerCase());
                }
            }
        }
        try (BufferedReader f1 = new BufferedReader(new FileReader(techFile))) {
            String line;
            while ((line = f1.readLine()) != null) {
                for (String x : line.split("\\s+")) {
                    if (!stopWords.contains(x.toLowerCase())) {
                        techWords.add(x.toLowerCase());
                    }
                }
            }
        }
        Collections.sort(techWords);
        File sortedTechFile = new File("sorted_" + techFile.getName());
        try (FileWriter fw = new FileWriter(sortedTechFile)) {
            for (String word : techWords) {
                fw.write(word + "\n");
            }
        }

        System.out.println("Sorted technical words saved to: " + sortedTechFile.getAbsolutePath());
    }
}
