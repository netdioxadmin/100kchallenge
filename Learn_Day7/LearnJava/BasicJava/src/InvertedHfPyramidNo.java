public class InvertedHfPyramidNo {
    public static void main(String[] args) {
        int limit=5;
        for (int i = 1; i<=limit; i++) {
            for (int j = 1; j <=limit-i+1; j++) {

                System.out.print(j);
                
            }
         
            System.out.println();
        }
        
    }
    
}
