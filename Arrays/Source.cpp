#include <iostream>
using namespace std;

void FillRand(int arr[], const int n, int min = 0,int max = 100);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
double Avarange(int arr[], const int n);
int minvalue(int arr[], const int n);
int maxvalue(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Sort(arr,n);
	Print(arr, n);
	cout << Avarange(arr, n)<<endl;
	cout << minvalue(arr, n) << endl;
	cout << maxvalue(arr, n) << endl;
}
void FillRand(int arr[], const int n,int min,int max)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (max-min)+min;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	int min_num;
	for (int i = 0; i < n; i++)
	{
		min_num = arr[i];
		for (int j = i; j < n; j++)
		{
			if (min_num > arr[j])
			{
				min_num = arr[j];
				arr[j] = arr[i];
			}
			arr[i] = min_num;
		}
	}
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
int minvalue(int arr[], const int n)
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < buffer)
		{
			buffer = arr[i];
		}
	}
	return buffer;
}
int maxvalue(int arr[], const int n)
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > buffer)
		{
			buffer = arr[i];
		}
	}
	return buffer;
}
