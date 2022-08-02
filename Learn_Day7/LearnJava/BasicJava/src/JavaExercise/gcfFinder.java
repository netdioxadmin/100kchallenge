package JavaExercise;

import java.util.Scanner;

public class gcfFinder {
    public static int gcfFind(int a, int b){
        
        while(a != b){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        return b;
    }
    
    public static void main(String[] args) {
        System.out.println("Enter 2 numbers :");
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        System.out.println(gcfFind(num1, num2));

    }
}
