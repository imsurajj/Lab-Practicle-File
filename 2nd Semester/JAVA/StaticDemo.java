// Static Keyword 
import java.util.Scanner;
class StaticDemo
{
    static int a=5;
    static int b;
    static void math(int c)
    {
        System.out.print("Value of A : "+a);
        System.out.print("\nValue of B :"+b);
        System.out.print("\nValue of C :"+c);
    }
    static
      {
        System.out.print("\n Inside Static Block ");
        b=a*4;
      }
      public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int a;
        System.out.print("\n Enter a Value to Perform the given Task : ");
        a=s.nextInt();
        math(a);
      }
}