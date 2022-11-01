import javax.swing.JOptionPane;
public class primero {
    public static void main(String[] args)
    {
        int lado1, lado2, lado3;
        lado1=Integer.parseInt(JOptionPane.showInputDialog("Ingrese el primero lado: "));
        lado2=Integer.parseInt(JOptionPane.showInputDialog("Ingrese el segundo lado: "));
        lado3=Integer.parseInt(JOptionPane.showInputDialog("Ingrese el tercer lado: "));
        if(lado1==lado2 )
        {
            if(lado2==lado3)
            {
                JOptionPane.showMessageDialog(null,"El triangulo es equilatero");
            }else
            {
                JOptionPane.showMessageDialog(null,"El triangulo es isoseles");
            }
        }else
        {
            if(lado3==lado2)
            {
                JOptionPane.showMessageDialog(null, "El triangulo es isoseles");
            }else
            {
                 JOptionPane.showMessageDialog(null,"El triangulo es escaleno");
            }
        }
    }
}
