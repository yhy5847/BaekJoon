#include <iostream>
using namespace std;

int main(void)
{
	int n, max, min;
	cin >> n;
	int* arr = new int[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	cout << min << " " << max;

	return 0;
}