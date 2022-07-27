package HelloSample;

import javax.swing.text.StyledEditorKit;

public class ClassSample {
    public static void main(String ar[]) {
        
        Sample s1=new Sample();
        Sample s2=new Sample();
        s1.a=20;
        s2.a=30;
        s1.b=100;
        s2.b=200;

        System.out.println("S1 -a  "+s1.a +"  S1-b  "+s1.b + "  S2-A  "+s2.a +"   S2-B   "+s2.b );
    }
    
}
