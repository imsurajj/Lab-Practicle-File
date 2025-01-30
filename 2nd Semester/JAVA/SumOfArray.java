import java.util.Scanner;
class SumOfArray {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int i, n, sum = 0;
        int [] a=new int[10];
        System.out.println("Enter n : ");
        n=s.nextInt();
        System.out.println("Enter "+n+"element");
        for(i=0;i<n;i++)
        {
            a[i]=s.nextInt();
            sum += a[i];
        }
        System.out.println("sum=" + sum);
    }
}
