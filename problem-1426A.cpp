#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;
        if (n <= 2)
        {
            std::cout << 1 << std::endl;
        }
        else
        {
            if (n <= x + 2)
            {
                std::cout << 2 << std::endl;
            }
            else
            {
                n -= 2;
                std::cout << (n + x - 1) / x + 1 << std::endl;
            }
        } 
    }
    return 0;
}
