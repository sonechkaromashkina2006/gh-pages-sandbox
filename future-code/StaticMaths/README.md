# StaticMaths — статическая математическая библиотека на C++

## Описание проекта

Статическая библиотека на C++, реализующая базовые арифметические операции через статические методы класса. Проект демонстрирует принципы модульной разработки и организации кода в C++.

## Структура проекта

```
StaticMaths/
├── mathlib.h          # Заголовочный файл с объявлением класса Arithmetic
├── mathlib.cpp        # Реализация методов класса Arithmetic
├── MathClient.cpp     # Пример использования библиотеки
└── README.md          # Документация проекта
```

## Функциональность

Библиотека предоставляет четыре основные арифметические операции:

1. **Сложение** — `add(double a, double b)`
2. **Вычитание** — `substruct(double a, double b)` (обратите внимание на опечатку в названии метода)
3. **Умножение** — `multiply(double a, double b)`
4. **Деление** — `division(double a, double b)`

Все методы являются статическими, что позволяет использовать их без создания экземпляра класса.

## Использование

### Подключение библиотеки

```cpp
#include "mathlib.h"
```

### Пример использования

```cpp
#include <iostream>
#include "mathlib.h"

int main()
{
    double a = 54.76, b = 5.7;
  
    std::cout << "Addition: " << MathsLibrary::Arithmetic::add(a, b) << std::endl;
    std::cout << "Subtraction: " << MathsLibrary::Arithmetic::substruct(a, b) << std::endl;
    std::cout << "Multiplication: " << MathsLibrary::Arithmetic::multiply(a, b) << std::endl;
    std::cout << "Division: " << MathsLibrary::Arithmetic::division(a, b) << std::endl;
  
    return 0;
}
```

## Сборка проекта

### Компиляция библиотеки

```bash
g++ -c mathlib.cpp -o mathlib.o
```

### Создание статической библиотеки

```bash
ar rcs libmathlib.a mathlib.o
```

### Компиляция клиентского приложения

```bash
g++ MathClient.cpp -L. -lmathlib -o MathClient
```

### Или компиляция всех файлов вместе

```bash
g++ mathlib.cpp MathClient.cpp -o MathClient
```
