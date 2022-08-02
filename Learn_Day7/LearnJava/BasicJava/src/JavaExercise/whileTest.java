package JavaExercise;
import java.util.Scanner;

public class whileTest {
    public static void main(String[] args) {
        int i=1;
        System.out.println("Do you want to Print your name:");
        Scanner sc=new Scanner(System.in);
        String name=sc.next();
        while ( i<=10 ) {
            System.out.println("Printing your name 10 Times :\n "+name);
            i++;   
        }

        
    }
    
}
