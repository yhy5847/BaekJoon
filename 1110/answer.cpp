#include <iostream>
using namespace std;

int main(void)
{
	int N, n, temp, num = 0;
	cin >> N;
	n = N;

	while (1)
	{
		temp = n / 10 + n % 10;
		n = (n % 10)*10 + temp % 10;
		num++;
		if (N == n)
		{
			cout << num;
			break;
		}
	}

	return 0;
}