#include <iostream>
using namespace std;

int main(void)
{
	int n, i = 1, j = 0;
	cin >> n;
	while (i <= n)
	{
		cout << "*";
		j++;

		if (i <= j)
		{
			cout << "\n";
			i++;
			j = 0;
		}
		
	}
}