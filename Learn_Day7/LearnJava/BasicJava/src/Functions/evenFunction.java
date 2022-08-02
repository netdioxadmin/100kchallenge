package Functions;

import java.util.Scanner;

public class evenFunction {

    public static int evenFind(int a){
        if (a%2 == 0) {
            System.out.println("The entere is even");
        }else{
            System.out.println("The Entered not is not even");
        }
        return a;
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int a=sc.nextInt();
        evenFind(a);
     

    }
    
}

