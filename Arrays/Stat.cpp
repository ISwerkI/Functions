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
