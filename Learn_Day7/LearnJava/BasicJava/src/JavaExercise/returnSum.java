package JavaExercise;

import java.util.Scanner;

public class returnSum {

    public static int noSum(int a, int b){
        int sum=0;
        sum=a+b;
    
    return sum;

    }

    public static int finGreater(int a, int b){
        int flag=0;
        if (a>b) {
            flag=1;
        } else{
            flag=0;
        }
        return flag;
    }
    
    public static void main(String[] args) {
        System.out.println("Enter two numbers:");
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        System.out.println("Sum of the Entered no is "+noSum(num1, num2));
        int gh=finGreater(num1, num2);
        if (gh==1) {
            System.out.println(num1+" is greater than "+num2);
        }else{
            System.out.println(num2+" is grater than "+num1);
        }
    }
}
