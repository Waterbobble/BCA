public class Account {
    int acc_no;
    String name;
    float amount;

    void insertRecord(int acc_no, String name, float amount){
        this.acc_no=acc_no;
        this.name=name;
        this.amount=amount;

    }

    void deposit(int amt){
        amount=amount+amt;
        System.out.println("Amount " + amt +" Deposited");
    }

    void withdraw( float amt){
        if(amount<amt){
            System.out.println("Insufficiant balance! Check balance");
        }
        else{
            amount=amount-amt;
            System.out.println("Amount " + amt + " withdrawn");
        }

    }

    void checkbalance(){
        System.out.println("The balance amount is: "+amount);

    }

    void display(){
        System.out.println("Account Number:     "+ " Name:     "+ " Amount     ");
        System.out.println(acc_no+"      "+name+"      "+amount);
    }
}
