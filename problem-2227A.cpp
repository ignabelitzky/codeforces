#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;
	while (t--)
	{
		int x, y;
		std::cin >> x >> y;
		if (x % 2 == 1 && y % 2 == 1)
			std::cout << "NO\n";
		else
			std::cout << "YES\n";
	}
	return 0;
}
