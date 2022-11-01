/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Charts_Tarea;

/**
 *
 * @author dante
 */
import java.text.DecimalFormat;
import javax.swing.JFrame;  
    import javax.swing.SwingUtilities;  
    import javax.swing.WindowConstants;  
      
    import org.jfree.chart.ChartFactory;  
    import org.jfree.chart.ChartPanel;  
    import org.jfree.chart.JFreeChart;  
    import org.jfree.chart.labels.PieSectionLabelGenerator;  
    import org.jfree.chart.labels.StandardPieSectionLabelGenerator;  
    import org.jfree.chart.plot.PiePlot;  
    import org.jfree.data.general.DefaultPieDataset;  
    import org.jfree.data.general.PieDataset;  
public class Charts_5_Tarea extends JFrame {
    public Charts_5_Tarea(String title) {  
        super(title);  
      
        // Create dataset  
        PieDataset dataset = createDataset();  
      
        // Create chart  
        JFreeChart chart = ChartFactory.createPieChart(  
            "Continentes",  
            dataset,  
            true,   
            true,  
            false);  
      
        //Format Label  
        PieSectionLabelGenerator labelGenerator = new StandardPieSectionLabelGenerator(  
            "Continente: {0} - ({2})", new DecimalFormat("0"), new DecimalFormat("0%"));  
        ((PiePlot) chart.getPlot()).setLabelGenerator(labelGenerator);  
          
        // Create Panel  
        ChartPanel panel = new ChartPanel(chart);  
        setContentPane(panel);  
      }  
      
      private PieDataset createDataset() {  
      
        DefaultPieDataset dataset=new DefaultPieDataset();  
        dataset.setValue("Africa", 36);  
        dataset.setValue("America", 17);  
        dataset.setValue("Asia", 23);  
        dataset.setValue("Europa", 21);  
        dataset.setValue("Oceania", 1);  
        return dataset;  
      }  
      
      public static void main(String[] args) {  
        SwingUtilities.invokeLater(() -> {  
          Charts_5_Tarea example = new Charts_5_Tarea ("Pie Chart Example");  
          example.setSize(800, 400);  
          example.setLocationRelativeTo(null);  
          example.setDefaultCloseOperation(EXIT_ON_CLOSE);  
          example.setVisible(true);  
        });  
      }  

}
