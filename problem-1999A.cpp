#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int n;
    while (t--)
    {
        std::cin >> n;
        std::cout << (n % 10) + (n /10) << std::endl;
    }
}
