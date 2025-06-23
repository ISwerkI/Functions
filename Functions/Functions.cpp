#include <iostream>
using namespace std;

int Add(int a, int b);			//Прототип (объявление)
int Sub(int a, int b);
int Mult(int a, int b);
double Div(int a, int b);


void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int sum = Add(a, b); //Использование функции или её вызов (Function call)
	cout << a << " + " << b << " = " << sum<<endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mult(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}
int Add(int a, int b)		//Реалитзация функции
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mult(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
