public class StarPatern {

    public static void main(String a[]) {
        int n=4;
        pattern1(n);
        
    }
    public static void pattern1 (int n){
        for (int row = 1; row < n;row++) {
        for ( int col=1; col <=n; col++) {
            System.out.println("*");
        }
        System.out.println();
        }
    }
    
}
