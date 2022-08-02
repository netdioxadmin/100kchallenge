package JavaExercise;

import java.util.Scanner;

public class threeNoAverage {
    
    public static int averageFind(int a, int b, int c){
        int result= (a+b+c)/3;
        return result;
        
    }

    public static void main(String[] args) {
        System.out.println("Enter 3 numbers:");
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        int num3=sc.nextInt();
        System.out.println (averageFind(num1, num2, num3));

    }
}
