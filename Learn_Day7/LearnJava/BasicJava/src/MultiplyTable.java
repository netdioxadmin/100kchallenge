import java.util.Scanner;

public class MultiplyTable {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the Number to print the Table");
        int table;
        table=s.nextInt();
        for (int i = 0; i <= 10; i++) {
            int mul;
            mul=table*i;
            System.out.println(+table+" x "+i+" = " +mul);
            
        }

    }
    
}
