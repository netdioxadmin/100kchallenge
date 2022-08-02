package JavaExercise;

import java.util.Scanner;

import javax.sql.rowset.spi.SyncResolver;

public class fibonacciFinder {
    
    public static int fibonacciGet(int lim) {
        int a=0;
        int b=1;
        System.out.print(a+ " ");
        if(lim > 1)
        for (int i = 0; i < lim; i++) {
            
            System.out.print(b+" ");
           int temp=b;
            b= a+b;
            a=temp;

        }
        System.out.println();
        return a;
        
    }
    public static void main(String[] args) {
        System.out.println("Enter the Limit: ");
        Scanner sc=new Scanner(System.in);
        int limit=sc.nextInt();
        System.out.println(fibonacciGet(limit));

    }
}
