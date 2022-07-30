import java.util.Scanner;

public class SumOfnNumbers {
    public static void main(String[] args) {
        
        System.out.println("Enter a number");
        Scanner s=new Scanner(System.in);
        int limt =s.nextInt();
        int counter=0;
        int sum=0;
        for ( counter = 0; counter <= limt ; counter++) {
            sum=sum+counter;
        }
        System.out.println("Sum of N numbers is : "+sum);

    }
    
}
