public class grade {
    public static void main(String [] args) {
        //float sad=0.00;
        //float maths=0.00;
        //float java=0.00;
        //float dsa=0.00;
        //float webtech=0.00;
        //float grade= (sad + maths + java + dsa + webtech) / 5
        int grade = 55;

        if (grade > 90) {
            System.out.println("Your grade is A+");
        } else if (grade > 80) {
            System.out.println("Your grade is A");
        } else if (grade > 70) {
            System.out.println("Your grade is B+");
        } else if (grade > 60) {
            System.out.println("Your grade is B");
        } else if (grade > 50) {
            System.out.println("Your grade is C+");
        } else if (grade > 40) {
            System.out.println("Your grade is C");
        } else if (grade > 35) {
            System.out.println("Your grade is D");
        } else {
            System.out.println("You have failed");
        }
    }
    }
