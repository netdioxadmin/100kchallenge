package HelloSample;

import java.util.Scanner;

public class IfSample {
    public static void main(String a []) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number");
        int num=sc.nextInt();
        if(num<0){
            System.out.println("Number is Negative");
        }else{
            System.out.println("Number is possitive. ");
        }

        
    }
}
