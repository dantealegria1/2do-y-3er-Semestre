import java.util.Scanner;
public class Ejercicio1 {
    static public void main(String[] args) {
        float suma;
        Scanner entrada= new Scanner(System.in);
        System.out.println("Ingrese la calificacion 1: ");
        float calificacion1_ = entrada.nextFloat();

        System.out.println("Ingrese la calificacion 2: ");
        float calificacion2_ = entrada.nextFloat();

        System.out.println("Ingrese la calificacion 3: ");
        float calificacion3_ = entrada.nextFloat();

        suma=calificacion1_+calificacion2_+calificacion3_;
        float promedio=suma/3;
        System.out.println("El promedio es: "+promedio);

    }
}
