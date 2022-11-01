import javax.swing.JOptionPane;

public class suma {
    static public void main(String[] args) {
        int numero1, numero2, suma, resta, multiplicacion;;
        double division;
        numero1=Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero entero: "));
        numero2=Integer.parseInt(JOptionPane.showInputDialog("Ingrese otro numero entero: "));
        suma= numero1+numero2;
        resta= numero1-numero2;
        multiplicacion= numero1*numero2;
        division= numero1/numero2;
        JOptionPane.showMessageDialog(null, "La suma de los numeros ingresados es: "+suma);
        JOptionPane.showMessageDialog(null, "La resta de los numeros ingresados es: "+resta);
        JOptionPane.showMessageDialog(null, "La multiplicacion de los numeros ingresados es: "+multiplicacion);
        JOptionPane.showMessageDialog(null, "La division de los numeros ingresados es: "+division);
    }
}
