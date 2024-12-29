package student;

public class Student {
  public String name;
  public int rollNumber;
  public Student(String name,int rollNumber){
    this.name = name;
    this.rollNumber = rollNumber;
  }
  public String getName(){
    return name;
  }  
  public int getRollNumber(){
    return rollNumber;
  }
}
