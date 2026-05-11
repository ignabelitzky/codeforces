#include <iostream>
#include <bit>

int main()
{
    unsigned int x = 0;
    std::cin >> x;
    std::cout << std::popcount(x) << std::endl;

    return 0;
}
