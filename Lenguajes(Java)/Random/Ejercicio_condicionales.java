import javax.swing.JOptionPane;

public class Ejercicio_condicionales {
    static public void main(String[] args)
    {
        char letra;
        letra=JOptionPane.showInputDialog("Digite la letra").charAt(0);

        if(Character.isUpperCase(letra))
        {
            JOptionPane.showMessageDialog(null, "Es mayuscula");
        }else{
            JOptionPane.showMessageDialog(null, "Es minuscula");
        }
    }
}
