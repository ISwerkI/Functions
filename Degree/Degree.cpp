#include <iostream>
using namespace std;

long long degree(int indicator, int footing)
{
    int answer = footing;
    for (int i = 1; i < indicator; i++)
    {
        answer *= footing;
    }
    return answer;
}

void main()
{
    setlocale(LC_ALL, "");
    int indicator;
    int footing;
    cout << "Введите основание степени: "; cin >> footing;
    cout<< "Введите показатель степени: "; cin >> indicator;
    cout << "Ответ: " << degree(indicator, footing) << endl;
}
