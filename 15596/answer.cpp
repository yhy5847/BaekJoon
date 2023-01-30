#include <iostream>
#include <vector>
using namespace std;

int sumOfN(vector<int>& a)
{
	int answer = 0;

	for (int i = 0; i < a.size(); ++i)
	{
		answer += a[i];
	}

	return answer;
}