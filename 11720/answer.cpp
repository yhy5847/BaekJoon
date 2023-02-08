#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, ans = 0;
	string num;
	int trns;
	cin >> n >> num;
	for (int i = 0; i < n; ++i)
	{
		trns = num[i] - '0';
		ans += trns;
	}
	cout << ans;
	return 0;
}