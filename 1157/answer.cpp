#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int num[58] = { 0 };
	char s;
	do
	{
		scanf("%c", &s);
		++num[s - 65];
	} while (s != '\n');

	char ans = 65;
	int temp = num[0];
	int same = 0;
	for (int i = 1; i < 58; ++i)
	{
		if (temp < num[i])
		{
			ans = i + 65;
			same = 0;
		}
		else if (temp == num[i] && temp != 0)
		{
			++same;
		}
	}

	if (same > 0)
	{
		cout << '?';
	}
	else
	{
		cout << ans;
	}

}