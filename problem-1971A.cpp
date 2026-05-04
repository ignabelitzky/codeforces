#include <iostream>

int main()
{
    int t = 0, x = 0, y = 0;
    std::cin >> t;
    while (t--)
    {
        std::cin >> x >> y;
        x > y ? std::cout << y << " " << x << "\n" : std::cout << x << " " << y << "\n";
    }

    return 0;
}
