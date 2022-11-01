import javax.swing.JOptionPane;
public class ventanas {
    public static void main(String[] args) {
        String cadena;
        int numero;
        char caracter;
        double decimal;

        cadena=JOptionPane.showInputDialog("Ingrese una cadena");
        numero=Integer.parseInt(JOptionPane.showInputDialog("Ingrese un numero entero"));
        caracter=JOptionPane.showInputDialog("Ingrese un caracter").charAt(0);
        decimal=Double.parseDouble(JOptionPane.showInputDialog("Ingrese un numero decimal"));

        JOptionPane.showMessageDialog(null, "La cadena ingresada es: "+cadena);
        JOptionPane.showMessageDialog(null, "El numero entero ingresado es: "+numero);
        JOptionPane.showMessageDialog(null, "El caracter ingresado es: "+caracter);
        JOptionPane.showMessageDialog(null, "El numero decimal ingresado es: "+decimal);
    }
}