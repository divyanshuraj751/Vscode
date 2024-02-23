import java.util.Scanner;

public class new12 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number a");
    int a = sc.nextInt();
    System.out.println("Enter number b");
    int b = sc.nextInt();
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / b;
    float Remainder = a % b;

    System.out.println("For Addition press 1\nFor Substraction press 2\nFor Multiplication press 3\nFor Division press 4\nFor Remainder press 5");
    int button = sc.nextInt();
    switch(button){
    case 1 : System.out.println(sum);
    break;
    case 2 : System.out.println(sub);
    break;
    case 3 : System.out.println(mul);
    break;
    case 4 : System.out.println(div);
    break;
    case 5: System.out.println(Remainder);
    break;
    default : System.out.println("Invaild input");
    }
   }
}
