#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        int count = 0;
        count = n / 4;
        n -= count * 4;
        count += (n / 2);
        std::cout << count << std::endl;
    }
    return 0;
}
