#include <iostream>
#include <string>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        std::string input;
        std::cin >> input;
        int size = input.size();
        if (size % 2 == 1)
        {
            std::cout << "NO\n";
        }
        else
        {
            std::string firstPart = input.substr(0, size / 2);
            std::string secondPart = input.substr((size / 2), size / 2);
            if (firstPart.compare(secondPart) == 0)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }
    return 0;
}
