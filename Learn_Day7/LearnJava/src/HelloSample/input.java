package HelloSample;

import java.util.Scanner;

public class input {
    public static void main(String ar[] ) {
        int a=0;
        int b=0;
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter 2 numbers");
            a=s.nextInt();
            b=s.nextInt();
        }
        int c=a+b;
        System.out.println("Sum = "+c);
        
    }
    
}
