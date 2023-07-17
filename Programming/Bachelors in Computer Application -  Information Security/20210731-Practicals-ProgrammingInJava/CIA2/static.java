import java.util.Scanner;
class student
{
 String name="SUMAN",USN="20BCAR0246";
 static String College,Course;
 int year=2;
 static
 {
   College="JAIN";
   Course="BCA";
  }

 void display()
 {
   System.out.println("The Name is "+ name);
   System.out.println("The USN is "+ USN); 
   System.out.println("The Course is "+ Course); 
   System.out.println("The College is "+ College);
   System.out.println("The Year is "+ year);
 }
 
 //void display1(){
   
  public static void main(String args[])
  {
    student s=new student();
    s.display();
   }
}