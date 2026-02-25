import java.io.*;
    public class IoByFileCreation {
        public static void main(String[] args){
            try{
                File iofile=new File("D:\\College Related\\Coding_Env\\BCA\\JAVA\\OOP in Java\\outputsforfileio\\createnew.txt");
                if (iofile.createNewFile()){
                    System.out.println("New file created");
                }
                else{
                    System.out.println("File already exists");
                }

            }catch(IOException e){
                System.out.println("File related issue"+e);
            }


        }

}
