package Functions;

//Calculating Sum of Two numbers with function. 
import java.util.Scanner;

public class sumFunction {
    //calculating sum
    public static void sumCalculation(int a, int b) {
        int sum = a+b;
        System.out.print("The sum of Numbers are \n"+sum);
        System.out.println();
        return;

    }
    //main function
    public static void main(String[] args) {
        System.out.println("Enter 2 numbers:::::::: ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();

        sumCalculation(a, b);

        return;
    }
   
}
