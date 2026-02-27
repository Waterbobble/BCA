import java.io.FileOutputStream;

    public class FileOutputWithString {
        public static void main(String args[]){
            try{
                FileOutputStream objout =new FileOutputStream("D:\\College Related\\Coding_Env\\BCA\\JAVA\\OOP in Java\\outputsforfileio\\stringoutput.txt.txt");
                String str="Welcome to OOPS";
                byte strbyte[]=str.getBytes(); // converting string into an array of bytes
                objout.write(strbyte);
                objout.close();
                System.out.println("Sucess");
            } catch (Exception e)
            {
                System.out.println(e);
            }
        }

    }

