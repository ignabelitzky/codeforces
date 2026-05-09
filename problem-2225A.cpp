#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        unsigned long long int x, y;
        std::cin >> x >> y;
        if (2 * x < y && (2*x) % y != 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}
