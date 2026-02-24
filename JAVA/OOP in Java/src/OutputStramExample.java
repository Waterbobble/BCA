
import java.io.FileOutputStream;

public class OutputStramExample {
    public static void main(String args[]){
        try{
            FileOutputStream objout =new FileOutputStream("D:\\java_program\\java_project_college\\testout.txt");
            objout.write(65);
            objout.close();
        } catch (Exception e)
        {
            System.out.println(e);
        }
    }

}
