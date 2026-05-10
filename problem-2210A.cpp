#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int n = 0;
        std::cin >> n;
        for (int i = n; i > 0; i--)
            std::cout << i << " ";
        std::cout << std::endl;
    }
    return 0;
}
