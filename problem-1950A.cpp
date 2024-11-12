#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a < b && b < c)
        {
            std::cout << "STAIR\n";
        }
        else if (a < b && b > c)
        {
            std::cout << "PEAK\n";
        }
        else
        {
            std::cout << "NONE\n";
        }
    }
    return 0;
}
