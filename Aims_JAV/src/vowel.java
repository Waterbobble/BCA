import java.util.Scanner;

public class vowel {
    public static void main (String  [] arg){
        Scanner scanner= new Scanner(System.in);
        System.out.println("Enter any character");
        char ch=scanner.next().charAt(0);
        switch (ch) {
            case 'a':
                System.out.println("Vowel");
                break;

            case 'e':
                System.out.println("Vowel");
                break;
            case 'i':
                System.out.println("Vowel");
                break;
            case 'o':
                System.out.println("Vowel");
                break;
            case 'u':
                System.out.println("Vowel");
                break;
            default:
                System.out.println("Consonant");

        }
        scanner.close();
    }
}
