package LABs;

public class ProgramToPrintSumOfFirstTenDigits {
    public static void main(String arg[]) {

        int sum = 0;
        for (int i = 0; i <= 10; i++) {
            sum = sum + i;
        }
        System.out.println(sum);
    }
}