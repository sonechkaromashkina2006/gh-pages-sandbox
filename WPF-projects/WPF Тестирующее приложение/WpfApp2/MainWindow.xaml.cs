using System;
using System.IO;
using System.Windows;
using System.Windows.Media.Imaging;

namespace WpfApp2
{
    public partial class MainWindow : Window
    {
        // Переменные для хранения правильных ответов
        private string correctAnswer1 = "";
        private string correctAnswers2 = "";
        private string correctAnswer3 = "";
        private string correctAnswer4 = "";
        private string imagePath = "";

        public MainWindow()
        {
            InitializeComponent();

            // Назначаем обработчики
            loadButton.Click += LoadButton_Click;
            checkButton.Click += CheckButton_Click;
            resetButton.Click += ResetButton_Click;

            checkButton.IsEnabled = false;
        }

        private void LoadButton_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                // Открываем диалог выбора файла
                var dialog = new Microsoft.Win32.OpenFileDialog();
                dialog.Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
                dialog.Title = "Выберите файл с вопросами";

                if (dialog.ShowDialog() == true)
                {
                    LoadQuestionsFromFile(dialog.FileName);
                    checkButton.IsEnabled = true;
                    MessageBox.Show("Вопросы успешно загружены!", "Успех");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Ошибка загрузки: {ex.Message}", "Ошибка");
            }
        }

        private void LoadQuestionsFromFile(string filePath)
        {
            string[] lines = File.ReadAllLines(filePath);
            int lineIndex = 0;

            // Вопрос 1 (RadioButton)
            if (lineIndex < lines.Length)
            {
                q1Text.Text = lines[lineIndex++]; // Текст вопроса

                // Варианты ответов
                if (lineIndex < lines.Length) q1Radio1.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q1Radio2.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q1Radio3.Content = lines[lineIndex++];

                // Правильный ответ
                if (lineIndex < lines.Length) correctAnswer1 = lines[lineIndex++];
            }

            // Пустая строка между вопросами
            if (lineIndex < lines.Length && string.IsNullOrWhiteSpace(lines[lineIndex]))
                lineIndex++;

            // Вопрос 2 (CheckBox)
            if (lineIndex < lines.Length)
            {
                q2Text.Text = lines[lineIndex++];

                if (lineIndex < lines.Length) q2Check1.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q2Check2.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q2Check3.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q2Check4.Content = lines[lineIndex++];

                if (lineIndex < lines.Length) correctAnswers2 = lines[lineIndex++];
            }

            // Пустая строка
            if (lineIndex < lines.Length && string.IsNullOrWhiteSpace(lines[lineIndex]))
                lineIndex++;

            // Вопрос 3 (TextBox)
            if (lineIndex < lines.Length)
            {
                q3Text.Text = lines[lineIndex++];

                if (lineIndex < lines.Length) correctAnswer3 = lines[lineIndex++];
            }

            // Пустая строка
            if (lineIndex < lines.Length && string.IsNullOrWhiteSpace(lines[lineIndex]))
                lineIndex++;

            // Вопрос 4 (RadioButton с картинкой)
            if (lineIndex < lines.Length)
            {
                q4Text.Text = lines[lineIndex++];

                // Путь к картинке
                if (lineIndex < lines.Length)
                {
                    imagePath = lines[lineIndex++];
                    LoadImage(imagePath);
                }

                if (lineIndex < lines.Length) q4Radio1.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q4Radio2.Content = lines[lineIndex++];
                if (lineIndex < lines.Length) q4Radio3.Content = lines[lineIndex++];

                if (lineIndex < lines.Length) correctAnswer4 = lines[lineIndex++];
            }
        }

        private void LoadImage(string path)
        {
            try
            {
                if (File.Exists(path))
                {
                    BitmapImage bitmap = new BitmapImage();
                    bitmap.BeginInit();
                    bitmap.UriSource = new Uri(path, UriKind.Absolute);
                    bitmap.EndInit();
                    questionImage.Source = bitmap;
                }
                else
                {
                    MessageBox.Show($"Файл изображения не найден: {path}", "Ошибка");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Ошибка загрузки изображения: {ex.Message}", "Ошибка");
            }
        }

        private void CheckButton_Click(object sender, RoutedEventArgs e)
        {
            int correctCount = 0;
            int totalQuestions = 4;

            // Проверка вопроса 1
            string selectedAnswer1 = "";
            if (q1Radio1.IsChecked == true) selectedAnswer1 = q1Radio1.Content.ToString();
            if (q1Radio2.IsChecked == true) selectedAnswer1 = q1Radio2.Content.ToString();
            if (q1Radio3.IsChecked == true) selectedAnswer1 = q1Radio3.Content.ToString();

            if (selectedAnswer1 == correctAnswer1)
                correctCount++;

            // Проверка вопроса 2
            string selectedAnswers2 = "";
            if (q2Check1.IsChecked == true) selectedAnswers2 += q2Check1.Content.ToString() + ",";
            if (q2Check2.IsChecked == true) selectedAnswers2 += q2Check2.Content.ToString() + ",";
            if (q2Check3.IsChecked == true) selectedAnswers2 += q2Check3.Content.ToString() + ",";
            if (q2Check4.IsChecked == true) selectedAnswers2 += q2Check4.Content.ToString() + ",";

            selectedAnswers2 = selectedAnswers2.TrimEnd(',');

            // Сравниваем выбранные ответы с правильными
            string[] selected2 = selectedAnswers2.Split(',');
            string[] correct2 = correctAnswers2.Split(',');

            bool allCorrect = true;
            foreach (string correct in correct2)
            {
                if (Array.IndexOf(selected2, correct.Trim()) == -1)
                    allCorrect = false;
            }

            if (selected2.Length == correct2.Length && allCorrect)
                correctCount++;

            // Проверка вопроса 3
            string userAnswer3 = q3TextBox.Text.Trim();
            if (userAnswer3.ToLower() == correctAnswer3.ToLower())
                correctCount++;

            // Проверка вопроса 4
            string selectedAnswer4 = "";
            if (q4Radio1.IsChecked == true) selectedAnswer4 = q4Radio1.Content.ToString();
            if (q4Radio2.IsChecked == true) selectedAnswer4 = q4Radio2.Content.ToString();
            if (q4Radio3.IsChecked == true) selectedAnswer4 = q4Radio3.Content.ToString();

            if (selectedAnswer4 == correctAnswer4)
                correctCount++;

            // Вывод результата
            resultText.Text = $"Результат: {correctCount}/{totalQuestions}";

            string message = $"Вопрос 1: {(selectedAnswer1 == correctAnswer1 ? "✓" : "✗")}\n" +
                           $"Вопрос 2: {(allCorrect ? "✓" : "✗")}\n" +
                           $"Вопрос 3: {(userAnswer3.ToLower() == correctAnswer3.ToLower() ? "✓" : "✗")}\n" +
                           $"Вопрос 4: {(selectedAnswer4 == correctAnswer4 ? "✓" : "✗")}\n\n" +
                           $"Итого: {correctCount} из {totalQuestions}";

            MessageBox.Show(message, "Результат теста");
        }

        private void ResetButton_Click(object sender, RoutedEventArgs e)
        {
            // Сброс вопроса 1
            q1Radio1.IsChecked = false;
            q1Radio2.IsChecked = false;
            q1Radio3.IsChecked = false;

            // Сброс вопроса 2
            q2Check1.IsChecked = false;
            q2Check2.IsChecked = false;
            q2Check3.IsChecked = false;
            q2Check4.IsChecked = false;

            // Сброс вопроса 3
            q3TextBox.Text = "";

            // Сброс вопроса 4
            q4Radio1.IsChecked = false;
            q4Radio2.IsChecked = false;
            q4Radio3.IsChecked = false;

            resultText.Text = "Результат: 0/4";
            checkButton.IsEnabled = false;
        }
    }
}