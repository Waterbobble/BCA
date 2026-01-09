package LABs;

import java.util.Scanner;

public class ProgramToCheckEligibilityForVoting {
    public static void main(String arg[]){
        Scanner objage= new Scanner(System.in);
            System.out.println("Enter the age: ");
            int age= objage.nextInt();
            if(age>=18){
                System.out.println("The person is Eligible to vote. ");
            }
            else{
                System.out.println("The person is not Eligible to vote. ");
            }
        }

    }

