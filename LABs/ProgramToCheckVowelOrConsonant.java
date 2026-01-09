package LABs;



import java.util.Scanner;

public class ProgramToCheckVowelOrConsonant {
    public static void main(String arg[]){
        Scanner objscanner= new Scanner(System.in);
        System.out.println("Enter a Character");
        String letters=objscanner.nextLine();
        char letter= letters.charAt(0);
        switch (letter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                System.out.println("The input charater"+letter+" is vowel");
                break;
            default:
                System.out.println("The input charater is Consonant");
        }


    }
}
