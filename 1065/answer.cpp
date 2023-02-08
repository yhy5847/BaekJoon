#include <iostream>
using namespace std;

bool FindNum(int num)
{
	if (num < 10) return true;

	int temp = num;
	int len = 1;

	while (true)
	{
		temp /= 10;
		if (temp == 0) break;
		++len;
	}

	int *arr = new int[len];

	for (int i = 0; i < len; ++i)
	{
		arr[i] = num % 10;
		num /= 10;
	}

	int com = arr[0] - arr[1];

	for (int i = 0; i < len-1; ++i)
	{
		if(com != arr[i] - arr[i + 1]) return false;
	}

	return true;
}


int main(void)
{
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (FindNum(i)) ++ans;
	}
	cout << ans;
	return 0;
}