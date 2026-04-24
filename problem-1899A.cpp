#include <iostream>
#include <string>

int main()
{

    int t = 0, n = 0;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        if (n % 3 == 0)
            std::cout << "Second\n";
        else
            std::cout << "First\n";
    }
    return 0;
}
