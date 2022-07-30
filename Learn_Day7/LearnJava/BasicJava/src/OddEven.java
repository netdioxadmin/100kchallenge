import java.util.Scanner;

public class OddEven {
    // Program to check if the no is odd or even
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println(" Enter a Number");
        int x = sc.nextInt();
        if (x%2==0) {
            System.out.println("The Entered NO is EVEN.");
            
        }else{
            System.out.println("The Entered NO is ODD.");
        }

        
    }
}
