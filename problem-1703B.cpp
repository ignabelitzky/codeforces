#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string input;
        std::cin >> input;
        std::sort(input.begin(), input.end());
        input.erase(std::unique(input.begin(), input.end()), input.end());
        std::cout << n + input.size() << std::endl;
    }
    return 0;
}
