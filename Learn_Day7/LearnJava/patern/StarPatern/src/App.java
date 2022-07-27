public class App {
    public static void main(String[] args) {
        int n=5;
        pattern4(n);

    }
    public static void pattern4(int n){
      for (int i = 0; i <n; i++) {
            for (int j = 1; j <=i; j++) {
          System.out.print(j);
             
       }
      System.out.println();
    }
    }

    public static void pattern1(int n){
      for (int i = 0; i < n; i++) {
         System.out.print(" ");
         for (int j = 0; j <=i; j++) {
            System.out.print("* ");  
         }
         System.out.println();
      }
    }
  public static void pattern2(int n){
    for (int i = 0; i <n; i++) {
          for (int j = 1; j <=i; j++) {
        System.out.print("* ");
           
     }
    System.out.println();
  }
 }
 public static void pattern3(int n){
  for (int i = 0; i <n; i++) {
        for (int j = 1; j <=n-i-1; j++) {
      System.out.print("* ");
         
   }
  System.out.println();
}
}
}