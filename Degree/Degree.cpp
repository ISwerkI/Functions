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
    cout << "������� ��������� �������: "; cin >> footing;
    cout<< "������� ���������� �������: "; cin >> indicator;
    cout << "�����: " << degree(indicator, footing) << endl;
}
