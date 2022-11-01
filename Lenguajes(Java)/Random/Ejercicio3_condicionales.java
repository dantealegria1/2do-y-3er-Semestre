import javax.swing.JOptionPane;

public class Ejercicio3_condicionales {
    static public void main(String[] args)
    {
        int horas;
        int excedente, salario2;
        horas=Integer.parseInt(JOptionPane.showInputDialog("Cuantas horas trabajaste"));
        if(horas>40)
        {
            excedente=horas-40;
            salario2=excedente*20;
        }else{
            salario2=0;
        }
        int salario=(horas*16)+salario2;
        JOptionPane.showMessageDialog(null,"el salario total es: "+salario );
    }
}
