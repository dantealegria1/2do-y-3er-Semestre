import javax.swing.JOptionPane;
public class Switchh {
    static public void main(String[] args)
    {
        int opcion;
        opcion=Integer.parseInt(JOptionPane.showInputDialog("Ingrese una opcion: "));
        switch(opcion)
        {
            case 1:
            JOptionPane.showMessageDialog(null, "Opcion 1");
            break;

            case 2:
            JOptionPane.showMessageDialog(null, "Opcion 2");
            break;

            case 3:
            JOptionPane.showMessageDialog(null, "Opcion 3");
            break;

            default:
            JOptionPane.showMessageDialog(null, "Opcion no valida");
        }
    }
}
