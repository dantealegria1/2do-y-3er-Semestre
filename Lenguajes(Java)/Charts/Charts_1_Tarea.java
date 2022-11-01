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

import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.chart.plot.PiePlot3D;
import org.jfree.data.general.DefaultPieDataset;
import org.jfree.data.general.PieDataset;
import org.jfree.util.Rotation;
public class Charts_1_Tarea extends JFrame{
    public Charts_1_Tarea(String applicationTitle, String chartTitle) {
        super(applicationTitle);
        // This will create the dataset
        PieDataset dataset = createDataset();
        // based on the dataset we create the chart
        JFreeChart chart = createChart(dataset, chartTitle);
        // we put the chart into a panel
        ChartPanel chartPanel = new ChartPanel(chart);
        // default size
        chartPanel.setPreferredSize(new java.awt.Dimension(500, 270));
        // add it to our application
        setContentPane(chartPanel);
    }
        private  PieDataset createDataset() {
        DefaultPieDataset result = new DefaultPieDataset();
        result.setValue("Aguascalientes", 66);
        result.setValue("Asientos", 3);
        result.setValue("Calvillo", 4);
        result.setValue("Cosio", 1);
        result.setValue("Jesus Maria", 9);
        result.setValue("Pabellon", 3);
        result.setValue("Rincon de Romos", 4);
        result.setValue("San Jose de Gracia", 0.6);
        result.setValue("Tepezala", 1);
        result.setValue("El llano", 1);
        result.setValue("San Francisco de los Romos", 4);
        return result;

    }
        
        /**     * Creates a chart     */
    private JFreeChart createChart(PieDataset dataset, String title) {

        JFreeChart chart = ChartFactory.createPieChart3D(
            title,                  // chart title
            dataset,                // data
            true,                   // include legend
            true,
            false
        );
                PiePlot3D plot = (PiePlot3D) chart.getPlot();
        plot.setStartAngle(290);
        plot.setDirection(Rotation.CLOCKWISE);
        plot.setForegroundAlpha(0.5f);
        return chart;
    }
    public static void main(String[] args) {
        // TODO code application logic here
            Charts_1_Tarea demo = new Charts_1_Tarea("Aguascalientes", "Porcentaje de poblacion en Ags");
            demo.pack();
            demo.setVisible(true);

    }

}
