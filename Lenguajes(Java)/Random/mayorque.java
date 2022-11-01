import java.util.Scanner;
public class mayorque {
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);                
        int n1,n2,n3,n4,n5,n6;

        System.out.print("dame el primer numero: ");
        n1=reader.nextInt();
        
        System.out.print("dame el segundo numero: ");
        n2=reader.nextInt();
        
        System.out.print("dame el tecero numero: ");
        n3=reader.nextInt();
        
        System.out.print("dame el cuarto numero: ");
        n4=reader.nextInt();
        
        System.out.print("dame el quinto numero: ");
        n5=reader.nextInt();
        
        System.out.print("dame el sexto numero: ");
        n6=reader.nextInt();

        int a=(Math.max(n1, n2));
        int b=(Math.max(n3, n4));
        int c=(Math.max(n5, n6));

        int a2=(Math.max(a, b));
        int b2=(Math.max(b, c));

        System.out.print("el numero mayor es: "+Math.max(a2, b2));
    }
}
