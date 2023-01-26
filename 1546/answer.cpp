#include <iostream>
using namespace std;

int main(void)
{
	int n;
	double max;
	double ave = 0;
	register int i;
	cin >> n;
	double* arr = new double[n];
	
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	max = arr[0];

	for (i = 1; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	max = 100/max;

	for (i = 0; i < n; ++i)
	{
		ave += arr[i] * max;
	}

	ave /= n;

	cout << ave;

	return 0;
}