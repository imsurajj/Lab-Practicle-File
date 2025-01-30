
// Find Percentage and Avg of Marks of 5 Students 
import java.util.Scanner;

class AvgPerc {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter Marks of Each Subject \n");
        System.out.print("JAVA : ");
        Float num1 = obj.nextFloat();
        System.out.print("DBMS : ");
        Float num2 = obj.nextFloat();
        System.out.print("DSA : ");
        Float num3 = obj.nextFloat();
        System.out.print("SE : ");
        Float num4 = obj.nextFloat();
        System.out.print("EVS : ");
        Float num5 = obj.nextFloat();

        Float sum = num1 + num2 + num3 + num4 + num5;
        Float avg = sum / 5;
        Float Percentage = (sum / 500) * 100;
        System.out.println("Total Marks : "+sum);
        System.out.print("Avg of Marks = " + avg);
        System.out.print("\nPercentage of Marks = " + Percentage);

    }
}
