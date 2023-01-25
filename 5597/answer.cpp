#include <iostream>
using namespace std;

int main(void)
{
	int* list = new int[28];
	int* num = new int[2];
	int k = 0;
	
	for (int i = 0; i < 28; ++i)
	{
		cin >> list[i];
	}
	
	for (int i = 1; i <= 30; ++i)
	{
		for (int j = 0; j < 28; ++j)
		{
			if (list[j] == i)
			{
				break;
			}
			else if (j == 27)
			{
				num[k] = i;
				k++;
			}
		}

		if (k == 2)
		{
			break;
		}
	}

	if (num[0] < num[1])
	{
		int temp = num[1];
		num[1] = num[0];
		num[0] = temp;
	}

	cout << num[1] << "\n" << num[0];

	return 0;
}