#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;
        std::cout << -a + b << std::endl;
    }
    return 0;
}
