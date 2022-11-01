import javax.lang.model.util.ElementScanner6;
import javax.swing.JOptionPane;
public class Ejercicio2_condicionales {
    static public void main(String[] args)
    {
    int numero1, numero2;
    numero1=Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero"));
    numero2=Integer.parseInt(JOptionPane.showInputDialog("Ingrese otro numero"));
    if(numero1>numero2)
    {
        JOptionPane.showMessageDialog(null, "El numero 1 es mayor que el numero 2");
    }
    if(numero1<numero2)
    {
        JOptionPane.showMessageDialog(null, "El numero 2 es menor que el numero 1");
    }
   if(numero1==numero2){
        JOptionPane.showMessageDialog(null, "Los numeros son iguales");
    }
}
}
