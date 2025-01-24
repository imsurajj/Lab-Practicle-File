// Pattern of Start 
//   *  
//   * *
//   * * *
//   * * * *

import java.util.Scanner;
class StarPattern{
    public static void main(String []args)
    {
        int n;
        Scanner s=new Scanner(System.in);  //Created a scanner for value
        System.out.print("Enter N : ");
        n=s.nextInt();
        for(int i=0;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            System.out.print("*");
            System.out.println();
        }
    }
}
