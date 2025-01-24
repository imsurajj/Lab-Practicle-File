import java.util.Scanner;
class SumOfDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Number");
        int a = sc.nextInt();
        int sum=0;
        do{
            int r=a%10;
            sum+=r;
            a/=10;
        }
        while(a>10);
        System.out.println("="+sum);
    }
}
