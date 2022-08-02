package Functions;

import java.util.Scanner;

public class primeFuncction {
    
    public static int primeFun(int a){
        if (a%2==0) {
            System.out.println("The give no is prime.");
                     
        }else{
            System.out.println("The give no is non prime.");
        }
        return a;

    }

    public static void main(String[] args) {
        System.out.println("Enter a no: ");
        Scanner sc=new Scanner(System.in);
        int a =sc.nextInt();
        primeFun(a);
    
        return;
    }
}
