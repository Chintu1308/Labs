package report;
import sports.Cricket;
import sports.Football;
import sports.spo;
import student.Student;

public class rep {
  public void generateReport(Student student, spo sports){
    System.out.println("Name: "+student.getName());
    System.out.println("Roll Number: "+student.getRollNumber());
    System.out.println("Sport Name: "+sports.getSportName());
  }
}
