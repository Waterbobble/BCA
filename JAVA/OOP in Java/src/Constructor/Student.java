package Constructor;

public class Student {
    int rollNO;
    String name;
    String address;
    String email;
    String faculty;
    float fee;
    long phoneN0;

    Student(int rollNO, String name, String patan, String number, String bca) {
        this.rollNO=rollNO;
        this.name=name;

    }

    Student (int rollNO, String name, String address, long phoneN0){
        this.rollNO=rollNO;
        this.name=name;
        this.phoneN0=phoneN0;
        this.address= address;

    }
    Student (int rollNO, String name, String address, long phoneN0,String faculty){
        this.rollNO=rollNO;
        this.name=name;
        this.phoneN0=phoneN0;
        this.address= address;
        this.faculty=faculty;

    }
    Student (int rollNO, String name, String address, long phoneN0,String faculty,String email,float fee){
        this.rollNO=rollNO;
        this.name=name;
        this.phoneN0=phoneN0;
        this.address= address;
        this.email=email;
        this.faculty=faculty;
        this.fee=fee;
    }
    void display(){
        System.out.println("Roll NO :" + rollNO);
        System.out.println("Name :" + name);
        System.out.println("Address :" + address);
        System.out.println("Email :" + email);
        System.out.println("Phone :" + phoneN0);
        System.out.println("Fee :" + fee);
        System.out.println("Faculty :" + faculty);
    }
    public static void main (String arg[]){
        Student objstudent=new Student(001,"Ram", "Patan", "9877700000", "BCA");
        Student objsham=new Student(002,"Shyam","Patan","9877700000","BCA");
        objsham.display();
        objstudent.display();
    }

}
