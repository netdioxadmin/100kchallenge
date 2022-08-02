package JavaExercise;

import java.util.Scanner;

public class sumOfOdd {
    public static int findSum(int a){
        int b=0;
        for (int i = 0; i < a; i++) {
            if (i%2!=0) {
                
                b=b+i; 
                
            }
            
            
        }
        return b;
    }


    public static void main(String[] args) {
        int b=0;
        System.out.println("Enter a Limit: ");
        Scanner sc=new Scanner(System.in);
        int limit=sc.nextInt();
        System.out.println("Sum of odd numbers: "+findSum(limit));
        
    }
    
}
