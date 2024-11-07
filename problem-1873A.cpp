#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    std::string input;
    while(t--)
    {
        std::cin >> input;
        if (input == "bca" || input == "cab")
        {
            std::cout << "NO\n";
        }
        else
        {
            std::cout << "YES\n"; 
        }
    }
    return 0;
}
