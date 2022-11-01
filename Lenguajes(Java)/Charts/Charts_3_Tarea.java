/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Charts_Tarea;

/**
 *
 * @author dante
 */
 import java.awt.Color;  
    import javax.swing.JFrame;  
    import javax.swing.SwingUtilities;  
    import javax.swing.WindowConstants;  
    import org.jfree.chart.ChartFactory;  
    import org.jfree.chart.ChartPanel;  
    import org.jfree.chart.JFreeChart;  
    import org.jfree.chart.plot.XYPlot;  
    import org.jfree.data.xy.XYDataset;  
    import org.jfree.data.xy.XYSeries;  
    import org.jfree.data.xy.XYSeriesCollection;  
      
public class Charts_3_Tarea extends JFrame {
     public Charts_3_Tarea(String title) {  
        super(title);  
      
        // Create dataset  
        XYDataset dataset = createDataset();  
      
        // Create chart  
        JFreeChart chart = ChartFactory.createScatterPlot(  
            "Dato 1 vs Dato 2",   
            "X-Axis", "Y-Axis", dataset);  
      
          
        //Changes background color  
        XYPlot plot = (XYPlot)chart.getPlot();  
        plot.setBackgroundPaint(new Color(255,228,196));  
          
         
        // Create Panel  
        ChartPanel panel = new ChartPanel(chart);  
        setContentPane(panel);  
      }  
      
      private XYDataset createDataset() {  
        XYSeriesCollection dataset = new XYSeriesCollection();  
      
        //Boys (Age,weight) series  
        XYSeries series1 = new XYSeries("Dato1");  
        series1.add(1, 0.084);  
        series1.add(2, 0.22);  
        series1.add(3, 0.43);  
        series1.add(4, 0.55);  
        series1.add(5, 0.59);  
        series1.add(6, 0.84);  
        series1.add(7, 0.22);  
        series1.add(8, 0.43);  
        series1.add(9, 0.55);  
        series1.add(10, 0.59);  
      
        dataset.addSeries(series1);  
          
       //Girls (Age,weight) series  
        XYSeries series2 = new XYSeries("Dato2");  
        series2.add(1, 0.45);  
        series2.add(2, 0.64);  
        series2.add(3, 0.15);  
        series2.add(4, 0.64);  
        series2.add(5, 0.38);  
        series2.add(6, 0.45);  
        series2.add(7, 0.64);  
        series2.add(8, 0.15);  
        series2.add(9, 0.64);  
        series2.add(10, 0.38);  
        
        dataset.addSeries(series2);  
        
         XYSeries series3 = new XYSeries("Dato3");  
        series3.add(1, 0.7);  
        series3.add(2, 0.5);  
        series3.add(3, 0.4);  
        series3.add(4, 0.3);  
        series3.add(5, 0.7);  
        series3.add(6, 0.9);  
        series3.add(7, 0.6);  
        series3.add(8, 0.7);  
        series3.add(9, 0.2);  
        series3.add(10, 0.5);  
      
      
        dataset.addSeries(series3);  
      
        return dataset;  
      }  
            public static void main(String[] args) {  
        SwingUtilities.invokeLater(() -> {  
          Charts_3_Tarea example = new Charts_3_Tarea("Tabla x/y");  
          example.setSize(800, 400);  
          example.setLocationRelativeTo(null);  
          example.setDefaultCloseOperation(EXIT_ON_CLOSE);  
          example.setVisible(true);  
        });  
      }  

      
}
