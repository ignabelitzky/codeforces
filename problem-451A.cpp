#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int min = n <= m ? n : m;
    if (min % 2 == 1)
    {
        std::cout << "Akshat\n";
    }
    else
    {
        std::cout << "Malvika\n";
    }
    return 0;
}
