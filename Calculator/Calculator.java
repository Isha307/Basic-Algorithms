import java.util.Scanner;
public class Calc {
static int op = 0;
static Scanner scan = new Scanner(System.in);
static double num1;
static double num2;
static double ans;


public static void main(String [] args){
    do{
    System.out.println("1 for Addition. 2 for Subtraction. 3 for Multiplication. 4 for Division.");
    op = scan.nextInt();
    }while(op<1 && op>4);
    if(op==1){
        System.out.println("Input your first number");
        num1 = scan.nextDouble();
        System.out.println("Input your second number");
        num2 = scan.nextDouble();
        ans = num1 + num2;
        System.out.println(ans);

    }
    if(op==2){
        System.out.println("Input your first number");
        num1 = scan.nextDouble();
        System.out.println("Input your second number");
        num2 = scan.nextDouble();
        ans = num1 - num2;
        System.out.println(ans);
    }
    if(op==3){
        System.out.println("Input your first number");
        num1 = scan.nextDouble();
        System.out.println("Input your second number");
        num2 = scan.nextDouble();
        ans = num1 * num2;
        System.out.println(ans);
    }
    if(op==4){
        System.out.println("Input your first number");
        num1 = scan.nextDouble();
        System.out.println("Input your second number");
        num2 = scan.nextDouble();
        ans = num1 / num2;
        System.out.println(ans);
    }
    
    }
}