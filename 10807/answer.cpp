#include <iostream>
using namespace std;

int main(void)
{
	int n, v, num = 0;

	cin >> n;
	int* arrN = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arrN[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (arrN[i] == v)
		{
			num++;
		}
	}
	
	cout << num;

	return 0;
}