import javax.swing.JOptionPane;
public class Ejercicio1_condicionales {
    static public void main(String[] args)
    {
        int numero;
        numero=Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero"));
        if(numero%10==0)
        {
            JOptionPane.showMessageDialog(null, "El numero es multiplo de 10");
        }
        else
        {
            JOptionPane.showMessageDialog(null, "El numero no es multiplo de 10");
        }
    }
}
