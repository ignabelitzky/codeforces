#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int a, b, c;

    while (t > 0)
    {
        std::cin >> a >> b >> c;
        --t;
        if ( a == b)
        {
            std::cout << c << std::endl;
        }
        if (a == c)
        {
            std::cout << b << std::endl;
        }
        if (b == c)
        {
            std::cout << a << std::endl;
        }
    }

    return 0;
}
