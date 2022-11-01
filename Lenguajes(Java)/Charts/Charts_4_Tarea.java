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
    import org.jfree.chart.plot.PlotOrientation;  
    import org.jfree.data.category.CategoryDataset;  
    import org.jfree.data.category.DefaultCategoryDataset;  
      

public class Charts_4_Tarea extends JFrame {
     public Charts_4_Tarea(String appTitle) {  
        super(appTitle);  
      
        // Create Dataset  
        CategoryDataset dataset = createDataset();  
          
        //Create chart  
        JFreeChart chart=ChartFactory.createBarChart(  
            "Poblacion Rural vs Urbana", //Chart Title  
            "Edad", // Category axis  
            "Poblacion", // Value axis  
            dataset,  
            PlotOrientation.VERTICAL,  
            true,true,false  
           );  
      
        ChartPanel panel=new ChartPanel(chart);  
        setContentPane(panel);  
      }  
      
      private CategoryDataset createDataset() {  
        DefaultCategoryDataset dataset = new DefaultCategoryDataset();  
      
        // Population in 2005  
        dataset.addValue(11.7, "Hombre Rural", "50-54");  
        dataset.addValue(8.1, "Mujer Rural", "50-54");  
        dataset.addValue(15.4, "Hombre Urbano", "50-54");  
        dataset.addValue(8.4, "Mujer Urbana", "50-54");  
      
        // Population in 2010  
        dataset.addValue(18.1, "Hombre Rural", "55-59");  
        dataset.addValue(11.7, "Mujer Rural", "55-59");  
        dataset.addValue(24.4, "Hombre Urbano", "55-59");  
        dataset.addValue(13.6, "Mujer Urbana", "55-59");  
       
      
        // Population in 2015  
        dataset.addValue(26.7, "Hombre Rural", "60-64");  
        dataset.addValue(20.3, "Mujer Rural", "60-64");  
        dataset.addValue(37.0, "Hombre Urbano", "60-64");  
        dataset.addValue(19.3, "Mujer Urbana", "60-64");  
        
        dataset.addValue(41, "Hombre Rural", "65-69");  
        dataset.addValue(31, "Mujer Rural", "65-69");  
        dataset.addValue(54.6, "Hombre Urbano", "65-69");  
        dataset.addValue(35.1, "Mujer Urbana", "65-69");
       
        dataset.addValue(66, "Hombre Rural", "70-74");  
        dataset.addValue(54.3, "Mujer Rural", "70-74");  
        dataset.addValue(71, "Hombre Urbano", "70-74");  
        dataset.addValue(50, "Mujer Urbana", "70-74");  
        
      
        return dataset;  
      }  
      
      public static void main(String[] args) throws Exception {  
        SwingUtilities.invokeAndWait(()->{  
          Charts_4_Tarea example=new Charts_4_Tarea("Bar Chart Window");  
          example.setSize(800, 400);  
          example.setLocationRelativeTo(null);  
          example.setDefaultCloseOperation(EXIT_ON_CLOSE);  
          example.setVisible(true);  
        });  
      }  
 
}
