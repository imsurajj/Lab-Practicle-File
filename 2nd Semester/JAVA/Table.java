// Table using JAVA
import java.util.Scanner;
class Table
{
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter a Number : ");
        int a = sc.nextInt();
        for(int i=1;i<=10;i++)
        {
            int x= a*i;
            System.out.print(a + " * " + i + " = " + x + "\n");
        }
    }
}