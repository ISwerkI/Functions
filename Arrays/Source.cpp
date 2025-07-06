#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Stat.h"

double Avarange(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int arr[n];
	FillRand(arr, n);
	Sort(arr,n);
	Print(arr, n);
	cout << Avarange(arr, n)<<endl;
	cout << minvalue(arr, n) << endl;
	cout << maxvalue(arr, n) << endl;
}
double Avarange(int arr[], const int n)
{
	double answer;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	answer = sum / n;
	return answer;
}
