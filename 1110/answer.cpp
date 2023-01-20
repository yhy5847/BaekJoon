#include <iostream>
using namespace std;

int main(void)
{
	int n, temp, num = 0;
	cin >> n;
	temp = n;

	if (n < 10)
	{
		n *= 10;
	}
	
	do
	{
		n = ((n/10 * 10) - n) *10 + (n / 10 + n % 10);
		num++;
	} while (temp != n);

	cout << num;
	return 0;
}