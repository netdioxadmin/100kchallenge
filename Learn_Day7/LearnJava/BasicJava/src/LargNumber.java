import java.util.Scanner;

public class LargNumber {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Input Enter 2 nubers No: ");
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        if (num1==num2) {
            System.out.print(+num1+" Is equal to "+num2);
            
        } else {
            if (num1>num2) {
                System.out.println(+num1+" Is greater than "+num2);
                
            }else{

                System.out.println(+num1+" Is less that "+num2);
            }
        }


    }
    
}
