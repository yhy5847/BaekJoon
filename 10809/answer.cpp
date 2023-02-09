#include <iostream>
using namespace std;

int main(void)
{
	string s;
	int ans[26];
	cin >> s;
	int i = 0;

	for (; i < 26; ++i)
	{
		ans[i] = -1;
	}

	i = 0;

	while (s[i] != '\0')
	{
		if (ans[s[i] - 97] == -1)
		{
			ans[s[i] - 97] = i;
		}
		
		++i;
	}

	for (i = 0; i < 25; ++i)
	{
		cout << ans[i] << ' ';
	}

	cout << ans[25];

	return 0;
}