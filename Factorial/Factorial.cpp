#include <iostream>
using namespace std;

long factorial(int user_num)
{
	int answer = 1;
	for (int i = 2; i <= user_num; i++)
	{
		answer *= i;
	}
	return answer;
}

void main()
{
	setlocale(LC_ALL, "");
	int user_num;
	cout << "¬ведите число, факториал которого хотите узнать: "; cin >> user_num;
	cout << "‘акториал " << user_num << " равен " << factorial(user_num) << endl;
}
