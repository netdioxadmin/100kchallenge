package JavaExercise;

import java.util.Scanner;

public class powerFinder {
           
   
    public static int powerFind(int a, int b){
        int result=1;
        for (int i = 1; i<=b; i++) {
          result=result*a;
         }
        return result;
    }
  

  public static void main(String[] args) {
    System.out.println("Enter 2 Numbers X and Y");
    Scanner sc=new Scanner(System.in);
    int x=sc.nextInt();
    int y=sc.nextInt();
    System.out.println(powerFind(x, y));
    return;
  }
  
  }

