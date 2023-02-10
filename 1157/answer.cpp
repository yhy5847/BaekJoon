#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	char temp;
	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 1; j < s.length() - i; ++j)
		{
			if (s[j - 1] < s[j])
			{
				temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}
	
	int num = 0;
	int same = 0;
	for (int i = 0; i < s.length() - 1; ++i)
	{
		if (s[i] != s[i + 1])
		{
			
		}
		++num;
	}
}