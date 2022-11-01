import java.util.Scanner;

public class ingresar_datos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Ingrese un numero entero: ");
        //es nextint para ingresar un numero entero por eso el int
        int numero = sc.nextInt();
        System.out.println("El numero ingresado es: " + numero);

        System.out.println("Ingrese una cadena: ");
        //el nextline es para que reciba toda la cadena,
        //solo toma hasta que pongamos un espacio
        String cadena1=sc.nextLine();
        System.out.println("La cadena ingresada es: " + cadena1);

        System.out.println("Ingrese una letra: "); 
        //charAt es la posicion que va a tomar el valor
        char letra1=sc.nextLine().charAt(2);
        System.out.println("La letra ingresada es: " + letra1);
    }
}
