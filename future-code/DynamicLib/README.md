# DynamicLib — динамическая библиотека и клиент на C++

## Описание проекта

Динамическая библиотека (DLL) на C++ с базовыми арифметическими операциями и клиентское приложение, демонстрирующее динамическую загрузку библиотеки через WinAPI.

## Структура проекта

```
DynamicLib/
├── DynamicLib/              # Динамическая библиотека
│   ├── Arythmetic.h        # Заголовочный файл с объявлениями функций
│   └── Arythmetic.cpp      # Реализация математических функций
├── DynamicClient/          # Клиентское приложение  
│   └── DynamicClient.cpp   # Клиент, загружающий DLL через WinAPI
└── README.md              # Документация проекта
```

## Функциональность

Библиотека предоставляет четыре основные арифметические операции:

1. **Сложение** — `Sum(int a, int b)`
2. **Вычитание** — `Min(int a, int b)`
3. **Умножение** — `Mult(int a, int b)`
4. **Деление** — `Div(int a, int b)`

Все функции экспортируются из DLL и загружаются клиентом динамически во время выполнения.

## Сборка проекта

### Компиляция библиотеки (DLL)

```bash
g++ -c Arythmetic.cpp -o Arythmetic.o
g++ -shared -o DynamicLib.dll Arythmetic.o
```

### Компиляция клиентского приложения

```bash
g++ DynamicClient.cpp -o DynamicClient.exe
```

### Сборка через Visual Studio

```bash
cl /LD Arythmetic.cpp /FeDynamicLib.dll
cl DynamicClient.cpp /FeDynamicClient.exe
```

## Запуск

1. Поместите `DynamicLib.dll` в ту же папку, что и `DynamicClient.exe`
2. Запустите клиентское приложение:

```bash
DynamicClient.exe
```
