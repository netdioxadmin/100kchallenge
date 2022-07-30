public class FloydsTriangle {
    
    public static void main(String[] args) {
        
        int limit=5;
        int number=1;
        for (int i = 1; i <=limit; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(+number+" ");
                number++;
                

            }
            System.out.println();
        }


    }
}
