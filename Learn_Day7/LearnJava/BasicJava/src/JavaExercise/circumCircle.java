package JavaExercise;

import java.util.Scanner;

public class circumCircle {

    public static double circumFind(double r){
        double pi=3.14;
        double cir=2*pi*r;
        return cir;

    }    


    public static void main(String[] args) {
        System.out.println("Enter the Readius of the Circle: ");
        Scanner sc=new Scanner(System.in);
        double radius=sc.nextInt();
        System.out.println(circumFind(radius));

    }
}
