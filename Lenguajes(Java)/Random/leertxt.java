import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class leertxt {
    public static void main(String[] args)
    {
        try
        {
            FileReader file=new FileReader("leer.txt");
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
}
