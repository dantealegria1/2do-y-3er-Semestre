using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace interfaces_graficos_05_05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent(); 
        }

        private void Form1_Load(object sender, EventArgs e) 
        {
           
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Lunes ");
        }
        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Martes ");
        }
        private void button3_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Miercoles ");
        }
        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Jueves ");
        }
        private void button5_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Viernes ");
        }
        private void button6_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Sabado ");
        }
        private void button7_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hoy es Domingo ");
        }
    }
}
