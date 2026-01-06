public class Student {
    int id;
    String name;
    int rollNo;
    String address;
    String email;
    int registerNo;
    String faculty;
    void insertRecord(int id, String name, int rollNo, String address, String email, int registerNo, String faculty)
    {
        this.id=id;
        this.name=name;
        this.rollNo=rollNo;
        this.address=address;
        this.email=email;
        this.registerNo=registerNo;
        this.faculty=faculty;
    }
    void displayRecords()
    {
        System.out.println("ID:"+id);
        System.out.println("Name:"+name);
        System.out.println("Roll Number:"+rollNo);
        System.out.println("Address:"+address);
        System.out.println("Email:"+email);
        System.out.println("Registered Number:"+registerNo);
        System.out.println("Faculty:"+faculty);
    }
}

