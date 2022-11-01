import java.util.Scanner;
public class ejercicio3 {
    static public void main(String[]args)
    {
        Scanner entrada=new Scanner (System.in);
        System.out.println("Dame la cantidad de dinero que tenga guillermo");
        int dineroG=entrada.nextInt();

        int dineroL=dineroG/2;
        int dineroJ=(dineroG+dineroL)/2;

        System.out.println("Guillermo tiene $"+dineroG);
        System.out.println("Juan tiene $"+dineroJ);
        System.out.println("Luis tiene $"+dineroL);
    }
}
