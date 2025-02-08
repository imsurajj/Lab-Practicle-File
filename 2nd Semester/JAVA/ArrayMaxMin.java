//*  Find Minimum and Maximum using Array
import java.util.Scanner;

class ArrayMaxMin {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n;
        System.out.print("Enter Number of Elements(n) : ");
        n = s.nextInt();
        int[] a = new int[n];
        int max, min;
        System.out.print("Enter " + n + " Elements ");
        for (int i = 0; i < n; i++) {
            System.out.print("a[" + i + "]=");
            a[i] = s.nextInt();
        }
        max = a[0];
        min = a[0];
        for (int i = 1; i < n; i++) {
            if (max < a[i])
                max = a[i];
            if (min > a[i])
                min = a[i];
        }
        System.out.println("Maximun number is " + min);
        System.out.println("Maximum number is " + max + "");
    }
}
