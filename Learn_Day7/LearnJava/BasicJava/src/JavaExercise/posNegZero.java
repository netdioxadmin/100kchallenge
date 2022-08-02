package JavaExercise;

import java.util.Scanner;

public class posNegZero {
    
    
    public static void main(String[] args) {
        int possitive=0;
        int negative=0;
        int zero=0;
        System.out.println("Enter the limit of numbers:");
        Scanner sc=new Scanner(System.in);
        int limit=sc.nextInt();
        for (int i = 1; i <=limit; i++) {
            int num=sc.nextInt();
            if (num>0) {
                possitive=possitive+1;
                               
            } else if (num<0) {
                negative=negative+1;                
            }else {
                zero=zero+1;
            }
           
           
        }
        System.out.println("Number of possitive numbers: "+possitive); 
        System.out.println("Number of Negative numbers: "+negative);
        System.out.println("Number of Zeros: "+zero);
       
    }
}
