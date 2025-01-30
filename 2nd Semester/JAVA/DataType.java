// Data Type Input and Display
import java.util.Scanner;
class DataType{
    public static void main(String[] args) {
        byte b;
        short sh;
        int i;
        long l;
        float f;
        double d;
        char c;
        boolean bool;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a Byte : ");
        b=s.nextByte();
        System.out.println("Enter a Short : ");
        sh=s.nextShort();
        System.out.println("Enter a Int : ");
        i=s.nextInt();
        System.out.println("Enter a Long : ");
        l=s.nextLong();
        System.out.println("Enter a Float : ");
        f=s.nextFloat();
        System.out.println("Enter a Double : ");
        d=s.nextDouble();
        System.out.println("Enter a Char : ");
        c=s.next().charAt(0);
        System.out.println("Enter a Boolean : ");
        bool=s.nextBoolean();
        // Display the data
        System.out.println("Byte : "+b);
        System.out.println("Short : "+sh);
        System.out.println("Int : "+i);
        System.out.println("Long : "+l);
        System.out.println("Float : "+f);
        System.out.println("Double : "+d);
        System.out.println("Char : "+c);
        System.out.println("Boolean : "+bool);
    }
}