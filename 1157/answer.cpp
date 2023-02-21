#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int num[26] = { 0 };
	char s;

	while (scanf("%c", &s) != EOF)
	{
		if (97 <= s && s <= 122)
		{
			++num[s - 97];
		}
		else
		{
			++num[s - 65];
		}
	}

	char ans = 0;
	int same = 0;
	int temp = num[0];
	for (int i = 1; i < 26; ++i)
	{
		if (temp < num[i])
		{
			temp = num[i];
			ans = i + 65;
			same = 0;
		}
		else if (temp == num[i] && num[i] != 0)
		{
			++same;
		}
	}

	if (same > 0)
	{
		ans = '?';
	}
	
	
	cout << ans;
}