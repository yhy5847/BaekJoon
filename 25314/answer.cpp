#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	n /= 4;
	for (int i = 0; i < n; ++i)
	{
		cout << "long ";
	}
	cout << "int";
}