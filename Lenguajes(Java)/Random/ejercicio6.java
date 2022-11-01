import java.util.Scanner;
public class ejercicio6 {
    //(a+b)^2 = a^2 + 2ab + b^2
    static public void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Ingrese los dos valores: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int a2=a*a;
        int b2=b*b;
        int ab=(a*b)*2;
        System.out.println("La expresion factorizada es: "+a+"^2 + 2*"+a+"*"+b+" + "+b+"^2");	
        System.out.println("El resultado es: " + a2+ab+b2);
    }
}
