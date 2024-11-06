#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int a, b, c;
    int max, min;
    while (t--)
    {
        std::cin >> a >> b >> c; 
        if (a + b > 9 || a + c > 9 || b + c > 9)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
    return 0;
}
