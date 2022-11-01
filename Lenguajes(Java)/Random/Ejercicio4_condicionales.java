import javax.swing.JOptionPane;

public class Ejercicio4_condicionales {
    static public void main(String[] args)
    {
        int n1, n2,n3;
        n1=Integer.parseInt(JOptionPane.showInputDialog("Dame el primer numero"));
        n2=Integer.parseInt(JOptionPane.showInputDialog("Dame el segundo numero"));
        n3=Integer.parseInt(JOptionPane.showInputDialog("Dame el segundo numero"));
        if(n1>n2)
        {
            if(n2>n3)
            {
                JOptionPane.showMessageDialog(null, n1+" "+n2+" "+n3);
            }else if(n2<n3)
            {
                JOptionPane.showMessageDialog(null, n1+" "+n3+" "+n2);
            }
        }
        if(n2>n1)
        {
            if(n1>n3)
            {
                JOptionPane.showMessageDialog(null, n2+" "+n1+" "+n3);
            }else if(n3>n1)
            {
                JOptionPane.showMessageDialog(null, n2+" "+n3+" "+n1); 
            }
        }
        if(n3>n1)
        {
            if(n1>n2)
            {
                JOptionPane.showMessageDialog(null, n3+" "+n1+" "+n2);
            }else if(n2>n1)
            {
                JOptionPane.showMessageDialog(null, n3+" "+n2+" "+n1); 
            }
        }
    }

}
