import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
public class crear_archivos {
    public static void main(String ars[]){
        try {
            String ruta = "filename.txt";
            String contenido = "Contenido de ejemplo";
            int numero = 1;
            File file = new File(ruta);
            // Si el archivo no existe es creado
            if (!file.exists()) {
                file.createNewFile();
            }
            FileWriter fw = new FileWriter(file);
            BufferedWriter bw = new BufferedWriter(fw);
            bw.write(contenido);
            bw.write(numero);
            bw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
