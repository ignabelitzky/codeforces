#include <iostream>

int main()
{
    int t = 0, x = 0, y = 0, a = 0;
    std::cin >> t;
    while (t--)
    {
        std::cin >> x >> y >> a;
        if (a % (x + y) == 0)
        {
            std::cout << "NO\n";
        }
        else if(a % (x + y) < x)
        {
            std::cout << "NO\n";
        }
        else
        {
            std::cout << "YES\n";
        }
    }
    return 0;
}
