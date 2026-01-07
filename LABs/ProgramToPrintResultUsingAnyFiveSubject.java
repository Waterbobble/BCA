package LABs;
import java.util.Scanner;
public class ProgramToPrintResultUsingAnyFiveSubject {static void main(String[] arg){

    String name;
    String subject1;
    int marks1;

    String subject2;
    int marks2;

    String subject3;
    int marks3;

    String subject4;
    int marks4;

    String subject5;
    int marks5;

    int totalMarks = 500;
    int obtainedMarks;
    float percentage;

    Scanner input = new Scanner(System.in);
    System.out.println("Enter the students Name:");
    name=input.nextLine();

    System.out.println("Enter the first Subject Name:");
    subject1=input.nextLine();

    System.out.println("Enter the first Subject Score ");
    marks1=input.nextInt();
    input.nextLine();

    System.out.println("Enter the Second Subject Name:");
    subject2=input.nextLine();

    System.out.println("Enter the Second Subject Score ");
    marks2=input.nextInt();
    input.nextLine();

    System.out.println("Enter the Third Subject Name:");
    subject3=input.nextLine();

    System.out.println("Enter the Third Subject Score ");
    marks3=input.nextInt();
    input.nextLine();

    System.out.println("Enter the Fourth Subject Name:");
    subject4=input.nextLine();

    System.out.println("Enter the Fourth Subject Score ");
    marks4=input.nextInt();
    input.nextLine();

    System.out.println("Enter the Fifth Subject Name:");
    subject5=input.nextLine();

    System.out.println("Enter the Fifth Subject Score ");
    marks5=input.nextInt();
    input.nextLine();

    obtainedMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage= obtainedMarks*100;
    percentage= percentage/totalMarks;

    System.out.println(name);
    System.out.println(subject1 + ":" + marks1 );
    System.out.println(subject2 + ":" + marks2 );
    System.out.println(subject3 +  ":" + marks3 );
    System.out.println(subject4 + ":" + marks4 );
    System.out.println(subject5 +":" + marks5 );
    System.out.println("The final percentage of the above mentioned subjects and there score is: " + percentage );







}
}
