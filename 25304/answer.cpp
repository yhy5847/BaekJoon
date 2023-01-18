#include <iostream>
using namespace std;

int main(void)
{
	int x, n, price, num, answer = 0;

	cin >> x >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> price >> num;
		answer += price * num;
	}

	if (x == answer)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}