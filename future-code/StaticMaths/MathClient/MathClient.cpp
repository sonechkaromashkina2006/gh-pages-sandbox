
#include <iostream>
#include <mathlib.h>

using namespace std;

int main()
{
	double a = 54.76, b = 5.7;
	cout << MathsLibrary::Arithmetic::add(a, b) << endl;
	cout << MathsLibrary::Arithmetic::substruct(a, b) << endl;
	cout << MathsLibrary::Arithmetic::multiply(a, b) << endl;
	cout << MathsLibrary::Arithmetic::division(a, b) << endl;
}

