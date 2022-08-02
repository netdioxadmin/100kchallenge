package Functions;

import java.util.Scanner;

public class tableFunction {
    public static int tableFun(int a){
        for (int i = 1; i <=10; i++) {
            int tab=i*a;
            System.out.println(+i+" X "+a+"="+tab);
            
        }
        return a;


    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to print the Multiplication Table :...");
        int num=sc.nextInt();
        tableFun(num);



    }
}
