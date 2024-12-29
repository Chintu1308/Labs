import report.rep;
import sports.Cricket;
import sports.Football;
import sports.Hockey;
import student.Student;

public class Week6a {
  public static void main(String args[]){
      // 1st report for student s1 who plays cricket
        Student s1 = new Student("Charan", 32);
        Cricket cri = new Cricket();
        rep r1 = new rep();
        r1.generateReport(s1, cri);
      // 2nd report for student s2 who plays football
        Student s2 = new Student("Vivek", 47);
        Football f = new Football();
        rep r2 = new rep();
        r2.generateReport(s2, f);
        Student s3 = new Student("Bob" , 68);
        Hockey h = new Hockey();
        rep r3 = new rep();
        r3.generateReport(s3, h);
  }
}
