#include <iostream>
using namespace std;

int main(void)
{
	int* arr = new int[10];
	int ans = 1;

	for (int i = 0; i < 10; ++i)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}
	
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 1; j < 10-i; ++j)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
			}
		}
	}

	int temp = arr[0];

	for (int i = 1; i < 10; ++i)
	{
		if (temp != arr[i])
		{
			++ans;
			temp = arr[i];
		}
	}

	cout << ans;

	return 0;

}