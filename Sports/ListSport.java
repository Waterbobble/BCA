package Sports;

public class ListSport extends Sports implements Chess, TableTennis,Badmintion, Basketball{
    public  void listsports(){
        System.out.println("This is suppose to print all the sports");
    }

    @Override
    public void chess() {
        System.out.println("This is suppose to be chess");
    }

    @Override
    public void badmintion() {
        System.out.println("This is suppose to be badmintion");

    }

    @Override
    public void TableTennis() {
        System.out.println("This is suppose to be tabletennis");

    }
    @Override
    public void basketball(){
        System.out.println("This is suppose to be basketball");

    }
}
