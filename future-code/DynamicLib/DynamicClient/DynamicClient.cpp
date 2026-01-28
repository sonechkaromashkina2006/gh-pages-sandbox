

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    HINSTANCE load;
    load = LoadLibrary(L"C:\\Users\\user\\source\\repos\\DynamicLib\\x64\\Debug\\DynamicLib.dll");
    typedef int (*sum)(int, int);
    typedef int (*min)(int, int);
    typedef int (*mult)(int, int);
    typedef double (*div)(int, int);
    sum Sum;
    min Min;
    mult Mult;
    div Div;
    Sum = (sum)GetProcAddress(load, "Sum");
    Min = (min)GetProcAddress(load, "Min");
    Mult = (mult)GetProcAddress(load, "Mult");
    Div = (div)GetProcAddress(load, "Div");
    int a = 100, b = 200;
    cout << Sum(a, b) << endl;
    cout << Min(a, b) << endl;
    cout << Mult(a, b) << endl;
    cout << Div(a, b) << endl;

    FreeLibrary(load);
}

