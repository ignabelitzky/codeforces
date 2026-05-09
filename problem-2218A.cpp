#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int x = 0;
        std::cin >> x;
        if (x % 67 == 0)
            std::cout << x << std::endl;
        else
            std::cout << x + 1 << std::endl;
    }
    return 0;
}
