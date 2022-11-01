/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package charts;

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


public class Charts5 extends JFrame{
    public Charts5(String title) {  
        super(title);  
      
        // Create dataset  
        PieDataset dataset = createDataset();  
      
        // Create chart  
        JFreeChart chart = ChartFactory.createPieChart(  
            "Pie Chart Example",  
            dataset,  
            true,   
            true,  
            false);  
      
        //Format Label  
        PieSectionLabelGenerator labelGenerator = new StandardPieSectionLabelGenerator(  
            "Marks {0} : ({2})", new DecimalFormat("0"), new DecimalFormat("0%"));  
        ((PiePlot) chart.getPlot()).setLabelGenerator(labelGenerator);  
          
        // Create Panel  
        ChartPanel panel = new ChartPanel(chart);  
        setContentPane(panel);  
      }  
      
      private PieDataset createDataset() {  
      
        DefaultPieDataset dataset=new DefaultPieDataset();  
        dataset.setValue("80-100", 120);  
        dataset.setValue("60-79", 80);  
        dataset.setValue("40-59", 20);  
        dataset.setValue("20-39", 7);  
        dataset.setValue("0-19", 3);  
        return dataset;  
      }  
      
      public static void main(String[] args) {  
        SwingUtilities.invokeLater(() -> {  
          Charts5 example = new Charts5 ("Pie Chart Example");  
          example.setSize(800, 400);  
          example.setLocationRelativeTo(null);  
          example.setDefaultCloseOperation(EXIT_ON_CLOSE);  
          example.setVisible(true);  
        });  
      }  

}
