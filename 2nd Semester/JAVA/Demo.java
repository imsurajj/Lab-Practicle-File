// Program on class and object
import java.util.Scanner;

class Demo {
    int a, b, c; // a,b,c are Data Member
    void input() {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter A: ");
        a = s.nextInt();
        System.out.print("Enter B: ");
        b = s.nextInt();
    }
    void add() {
        c = a + b;
    }
    void display() {
        System.out.print("Addition of " + a + " and " + b + " = " + c);
    }

    public static void main(String[] args) {
        Demo d = new Demo();
        d.input();
        d.add();
        d.display();
    }
}