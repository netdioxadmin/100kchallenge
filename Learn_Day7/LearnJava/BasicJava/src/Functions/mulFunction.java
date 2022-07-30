//Multiplying 2 numbers with finctions. 
package Functions;

import java.util.Scanner;

public class mulFunction {

    public static int multiplyFun(int a, int b){
        int mul=a*b;
        return mul;
    }
    
    public static void main(String[] args) {
        System.out.println("Enter 2 numbers:...");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();

        int result=multiplyFun(a, b);
        System.out.print("Result:  "+result);
        System.out.println();
    }
}
