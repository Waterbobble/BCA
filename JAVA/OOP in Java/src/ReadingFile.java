import java.io.FileInputStream;

public class ReadingFile {
    public static void main(String args[]){
        try{
            FileInputStream objout =new FileInputStream("D:\\College Related\\Coding_Env\\BCA\\JAVA\\OOP in Java\\outputsforfileio\\stringoutput.txt.txt");
            int i=0;
            while ((i=objout.read()) != -1)
            {
                System.out.print((char)i);
            }
        } catch (Exception e)
        {
            System.out.println(e);
        }
    }

}
