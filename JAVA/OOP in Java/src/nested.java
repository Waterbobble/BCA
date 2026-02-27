public class nested {
    public static void main(String [] arg){
        String address= "Japan";
        if(address.endsWith("Nepal")){
            if(address.contains("Bhaktapur")){
                System.out.println("Your city is Bhaktapur");
            }
            else if (address.contains("Lalitpur")){
                System.out.println("Your city is Lalitpur");
            }
            else{
                System.out.println(address.split(",")[0]);
            }
        }
        else{
            System.out.println("You are not living in Nepal");
        }
    }

}
