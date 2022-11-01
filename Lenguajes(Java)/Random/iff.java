import javax.swing.JOptionPane;

public class iff {
    static public void main(String[] args)
    {
        int numero, dato=5;
        numero=Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero"));
        if(numero==dato)
        {
            JOptionPane.showMessageDialog(null, "El numero es igual a 5");
        }
        else
        {
            JOptionPane.showMessageDialog(null, "El numero no es igual a 5");
        }
    }
}
