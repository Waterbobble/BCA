public class Studnetmain {
    public static void main (String arg []){

        /*
        Student objStudent = new Student();
        objStudent.name="Sagar Basnet";
        objStudent.address="Harisiddhi-28";
        objStudent.email="sagarbasnet0007@gmail.com";
        objStudent.id=555;
        objStudent.faculty="BCA";
        objStudent.registerNo=9871111;
        objStudent.rollNo=10068;
        //System.out.println("ID:"+objStudent.id+"Name:"+objStudent.name+"Address:"+objStudent.address+"Email:"+objStudent.email+"Faculty:"+objStudent.faculty+"Register Number:"+objStudent.registerNo+"Rollno:"+objStudent.rollNo);


        Student objStudent2 = new Student();
        objStudent2.name="Ram Shankar";
        objStudent2.address="kathmandu";
        objStudent2.email="kathmandu-ram-shankar@gmail.com";
        objStudent2.id=001;
        objStudent2.faculty="BCA";
        objStudent2.registerNo=0011;
        objStudent2.rollNo=222;
        System.out.println("Name:"+objStudent2.name);
        System.out.println("Address:"+objStudent2.address);
        System.out.println("Email:"+objStudent2.email);
        System.out.println("ID:"+objStudent2.id);
        System.out.println("Faculty:"+objStudent2.faculty);
        System.out.println("Registered No:"+objStudent2.registerNo);
        System.out.println("Roll no:"+objStudent2.rollNo);*/

        Student objStudent= new Student();
        objStudent.insertRecord(001,"Sagar",22,"harisiddhi","123@gmail.com",99,"BCA");
        objStudent.displayRecords();


    }
}
