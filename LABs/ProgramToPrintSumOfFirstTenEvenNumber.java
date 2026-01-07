package LABs;

public class ProgramToPrintSumOfFirstTenEvenNumber {
    public static void main (String arg []){
        int sum=0;
        for(int i=0;i<=20;i++) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
        }
        System.out.println(sum);
    }
}
