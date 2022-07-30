import java.util.Scanner;

public class sum{

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 2 Numbers \n");
        int num1, num2, sum;

        num1=sc.nextInt();
        num2=sc.nextInt();
        sum = num1+num2;
        System.out.println("Result :   "+sum);
    }


}