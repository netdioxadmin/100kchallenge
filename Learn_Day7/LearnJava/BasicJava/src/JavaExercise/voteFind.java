package JavaExercise;

import java.util.Scanner;
public class voteFind {
    
    public static int finElegiblety(int a){
        int flag =0;
        if (a>=18) {
            flag = 1;            
        }else{
            flag =0;
        }
        return flag;
    }
    public static void main(String[] args) {
        System.out.println("Enter the Age of the Person: ");
        Scanner sc=new Scanner(System.in);
        int age=sc.nextInt();
        int result = (finElegiblety(age));
        if (result==1) {
          System.out.println("Your are eligble for voting");
         }else{
            int b=18-age;
            System.out.println("Sorry you are not eligible this time. Please try after " +b+ " Years");
         }
        
    }
}
