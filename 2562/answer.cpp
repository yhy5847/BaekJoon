#include <iostream>
using namespace std;

int main(void)
{
	int max, current, num;

	cin >> max;
	current = max;
	num = 1;

	for (register int i = 0; i < 8; ++i)
	{
		cin >> current;
		if (max < current)
		{
			max = current;
			num = i+2;
		}
	}

	cout << max << "\n" << num;

	return 0;
}