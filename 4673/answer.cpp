#include <iostream>
using namespace std;

int SelfNumber(int n)
{
	int num = n;
	while (n != 0)
	{
		num = num +(n % 10);
		n /= 10;
	}
	return num;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool check[10001] = { false };
	for (int i = 1; i < 10001; ++i)
	{
		int n = SelfNumber(i);
		if (n < 10001)
		{
			check[n] = true;
		}
	}

	for (int i = 1; i < 10001; ++i)
	{
		if (!check[i])
		{
			cout << i << "\n";
		}
	}
}