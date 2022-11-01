using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ejercicio4_contraseñas
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            
        }
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox2.Text == "Arriba el Atlas")
            {
                MessageBox.Show("Contraseña correcta");
            }
            else
            {
                MessageBox.Show("Contraseña incorrecta");
            }
            if (textBox1.Text != "Mar")
            {
                MessageBox.Show("Uusario incorrecte");
            }
        }
    }
}
