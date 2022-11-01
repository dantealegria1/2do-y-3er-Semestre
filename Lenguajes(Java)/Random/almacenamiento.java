import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Scanner;
import java.io.InputStream;
public class almacenamiento {
    static public void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Dame cuantos datos quieres caputrar");
        int n = sc.nextInt();
        int arreglo[]=new int[n];
        for(int i=0;i<arreglo.length;i++)
        {
            System.out.println("Dame el valor de i en la posicion "+(i+1));
            arreglo[i] = sc.nextInt();
        }
        System.out.println("Dame el nombre del archivo");
        String nombre = sc.next();
        String b;
        try
        {
            OutputStream out = new FileOutputStream(nombre);
            out.write("nombre del archivo con extension: ".getBytes());
            out.write(nombre.getBytes());
            out.write("\n".getBytes());
            for(int i=0;i< arreglo.length;i++)
            {
                b=String.valueOf(arreglo[i]);
                out.write(b.getBytes());
                out.write(" ".getBytes());
            }
            out.close();
        
        InputStream file=new FileInputStream(nombre);
        int size=file.available();
        for(int i=0;i<size;i++)
        {
            System.out.println(file.read()+" ");
        }
        file.close();
        out.close();
    }
    catch(IOException e)
    {
        System.out.println("Error");
    }
    System.out.println("El contenido el archivo es");
    
    try
    {
        FileReader file=new FileReader(nombre);
        BufferedReader br=new BufferedReader(file);
        String linea;
        while((linea=br.readLine())!=null)
        {
            System.out.println(linea);
        }
    }
    catch(IOException e)
    {
        System.out.println("Error");
    }
    }
    //leer archivo
}
/*   try
    {
        InputStream file=new FileInputStream(nombre);
        int size=file.available();
        for(int i=0;i<size;i++)
        {
            System.out.println(file.read()+" ");
        }
        file.close();
    } */
