/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Charts_Tarea;

/**
 *
 * @author dante
 */
import javax.swing.JFrame;  
    import javax.swing.SwingUtilities;  
      
    import org.jfree.chart.ChartFactory;  
    import org.jfree.chart.ChartPanel;  
    import org.jfree.chart.JFreeChart;  
    import org.jfree.data.category.DefaultCategoryDataset;  
      
public class Charts_2_Tarea extends JFrame {
      public Charts_2_Tarea(String title) {  
        super(title);  
        // Create dataset  
        DefaultCategoryDataset dataset = createDataset();  
        // Create chart  
        JFreeChart chart = ChartFactory.createLineChart(  
            "Poblacion de cerezos", // Chart title  
            "Girth", // X-Axis Label  
            "Height", // Y-Axis Label  
            dataset  
            );  
      
        ChartPanel panel = new ChartPanel(chart);  
        setContentPane(panel);  
      }  
      
      private DefaultCategoryDataset createDataset() {  
      
        String series1 = "Diametro del tronco";  
        String series2 = "Altura del arbol en pies";  
      
        DefaultCategoryDataset dataset = new DefaultCategoryDataset();  
      
        dataset.addValue(8.3  , series1, "1");  
        dataset.addValue(8.6, series1, "2");  
        dataset.addValue(8.8, series1, "3");  
        dataset.addValue(10.5, series1, "4");  
        dataset.addValue(10.7, series1, "5");  
        dataset.addValue(10.8, series1, "6");  
        dataset.addValue(11.0, series1, "7");
        dataset.addValue(11.1, series1, "8");  
        dataset.addValue(11.2, series1, "9");  
        dataset.addValue(11.3, series1, "10");  
        dataset.addValue(11.4, series1, "11"); 
        dataset.addValue(11.4, series1, "12");
        dataset.addValue(11.7, series1, "13");  
        dataset.addValue(12.0, series1, "14");  
        dataset.addValue(12.9, series1, "15");  
        dataset.addValue(12.9, series1, "16"); 
        
        dataset.addValue(13.3, series1, "17");
        dataset.addValue(13.7, series1, "18");  
        dataset.addValue(13.8, series1, "19");  
        dataset.addValue(13.8, series1, "20");  
        dataset.addValue(14.0, series1, "21"); 
        dataset.addValue(14.2, series1, "22");
        dataset.addValue(14.5, series1, "23");  
        dataset.addValue(16.0, series1, "24");  
        dataset.addValue(16.3, series1, "25");  
        dataset.addValue(17.3, series1, "26"); 
        
        dataset.addValue(17.5, series1, "27");
        dataset.addValue(17.9, series1, "28");  
        dataset.addValue(18.0, series1, "29");  
        dataset.addValue(18.0, series1, "30");  
        dataset.addValue(20.6, series1, "31"); 
      
       
        dataset.addValue(70  , series2, "1");  
        dataset.addValue(65, series2, "2");  
        dataset.addValue(63, series2, "3");  
        dataset.addValue(72, series2, "4");  
        dataset.addValue(81, series2, "5");  
        dataset.addValue(83, series2, "6");  
        dataset.addValue(66, series2, "7");
        dataset.addValue(75, series2, "8");  
        dataset.addValue(80, series2, "9");  
        dataset.addValue(75, series2, "10");  
        dataset.addValue(79, series2, "11"); 
        dataset.addValue(76, series2, "12");
        dataset.addValue(76, series2, "13");  
        dataset.addValue(69, series2, "14");  
        dataset.addValue(75, series2, "15");  
        dataset.addValue(74, series2, "16"); 
        
        dataset.addValue(85, series2, "17");
        dataset.addValue(86, series2, "18");  
        dataset.addValue(71, series2, "19");  
        dataset.addValue(64, series2, "20");  
        dataset.addValue(78, series2, "21"); 
        dataset.addValue(80, series2, "22");
        dataset.addValue(74, series2, "23");  
        dataset.addValue(72, series2, "24");  
        dataset.addValue(77, series2, "25");  
        dataset.addValue(81, series2, "26"); 
        
        dataset.addValue(82, series2, "27");
        dataset.addValue(80, series2, "28");  
        dataset.addValue(80, series2, "29");  
        dataset.addValue(80, series2, "30");  
        dataset.addValue(87, series2, "31");      

      
        return dataset;  
      }  
            public static void main(String[] args) {  
        SwingUtilities.invokeLater(() -> {  
          Charts_2_Tarea example = new Charts_2_Tarea("Arboles");  
          example.setAlwaysOnTop(true);  
          example.pack();  
          example.setSize(600, 400);  
          example.setDefaultCloseOperation(EXIT_ON_CLOSE);  
          example.setVisible(true);  
        });  
      }  

}
