#include <iostream>

int main(void)
{
	int t, a, b;

	std::cin >> t;

	for (int i = 0; i < t; ++i)
	{
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}

	return 0;
}