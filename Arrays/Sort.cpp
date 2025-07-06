#include "Sort.h"
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
