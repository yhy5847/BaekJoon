#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int* ans = new int[n] {};
	string temp;
	int num = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		
		for (int j = 0; j < temp.length(); ++j)
		{
			if (temp[j] == 'O')
			{
				++num;
				ans[i] += num;
			}
			else
			{
				num = 0;
			}
		}
		num = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << "\n";
	}

	delete[] ans;

	return 0;

}