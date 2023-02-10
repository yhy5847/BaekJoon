#include <iostream>
using namespace std;

string MulStr(string str, int mul)
{
	string temp;
	for (int i = 0; i < str.length(); ++i)
	{
		for (int j = 0; j < mul; ++j)
		{
			temp += str[i];
		}
	}

	return temp;
}

int main(void)
{
	int t;
	cin >> t;
	int* r = new int[t];
	string* s = new string[t];
	for (int i = 0; i < t; ++i)
	{
		cin >> r[i] >> s[i];
	}
	for (int i = 0; i < t; ++i)
	{
		s[i] = MulStr(s[i], r[i]);
	}
	for (int i = 0; i < t; ++i)
	{
		cout << s[i] << endl;
	}

	return 0;
}