public class Student_Constructor {
    int id;
    String StudentName;
    String Address;
    String Email;
    String Faculty;

    public Student_Constructor( int id, String StudentName, String Address, String Email, String Faculty){
        this.id=id;
        this.StudentName=StudentName;
        this.Address=Address;
        this.Email=Email;
        this.Faculty=Faculty;
    }

    void display(){
        System.out.println(id + " " + StudentName +" " + Address + " " + Email + " " + Faculty);
    }
    public static void main (String arg []){
        Student_Constructor student1 = new Student_Constructor(001,"Sagar","Harisiddhi","Sagarbasnet0007@gmail.com","BCA");
        Student_Constructor student2 = new Student_Constructor(002,"Ram","Harisiddhi","Ram0007@gmail.com","BCA");
        student1.display();
        student2.display();


    }

}
