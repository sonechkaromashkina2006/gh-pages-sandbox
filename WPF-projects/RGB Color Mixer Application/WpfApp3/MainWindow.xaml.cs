using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp3
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            redSlider.ValueChanged += (s, e) => UpdateColor();
            greenSlider.ValueChanged += (s, e) => UpdateColor();
            blueSlider.ValueChanged += (s, e) => UpdateColor();
        }
        private void UpdateColor()
        {
            byte r = (byte)redSlider.Value;
            byte g = (byte)greenSlider.Value;
            byte b = (byte)blueSlider.Value;

            colorGrid.Background = new SolidColorBrush(Color.FromRgb(r, g, b));
        }
    }
}
