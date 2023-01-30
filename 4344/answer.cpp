#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n, m;
	double ave = 0, student = 0;
	double* arr;
	cin >> n;
	double* ans = new double[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		arr = new double[m];

		for (int j = 0; j < m; ++j)
		{
			cin >> arr[j];
			ave += arr[j];
		}

		ave /= m;

		for (int j = 0; j < m; ++j)
		{
			if (arr[j] > ave)
			{
				++student;
			}
		}

		ans[i] = round(student / m * 100000) / 1000;

		student = 0;
		ave = 0;
		delete[] arr;
	}

	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << "%\n";
	}

	delete[] ans;

	return 0;
}