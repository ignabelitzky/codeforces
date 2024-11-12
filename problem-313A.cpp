#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n >= 0)
    {
        std::cout << n << std::endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        std::cout << (a > b ? a : b) << std::endl;
    }
    return 0;
}
