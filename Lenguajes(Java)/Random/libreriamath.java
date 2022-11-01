public class libreriamath {
    public static void main(String[] args) {
        double raiz=Math.sqrt(9323); 
        //adentro del parentesis es el valor de la raiz que queramos sacar 
        System.out.println("La raiz cuadrada de 25 es: "+raiz);
        double base=5, exponente=4;
        double resultado=Math.pow(base, exponente);
        System.out.println("El resultado de la potencia es: "+resultado);
        double numero=4.32;
        double redondear=Math.round(numero);
        System.out.println("El numero redondeado es: "+redondear);
        double random=Math.random();
        System.out.println("El numero random es: "+random);
    }
}
