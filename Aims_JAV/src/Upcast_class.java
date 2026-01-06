public class Upcast_class {
    public static void main (String args[]){
        double doubleType=20.9811;
        float floatType= (float)doubleType;
        long longType= (long)floatType;
        int intType= (int)longType;
        short shortType= (short)intType;
        byte byteType= (byte)shortType;

        System.out.println(doubleType + " Double");
        System.out.println(floatType + " Float");
        System.out.println(longType + " Long");
        System.out.println(intType + " Int");
        System.out.println(shortType + " Short");
        System.out.println(byteType + " Byte");

    }
}
