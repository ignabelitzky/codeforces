#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::string input;
    int result = 0;
    std::unordered_set<std::string> names;
    while (std::getline(std::cin, input))
    {
        if (input.empty())
            continue;
        if (input.at(0) == '+')
        {     
            size_t pos = input.find('+');
            names.insert(input.substr(pos + 1));
        }
        else if (input.at(0) == '-')
        {
            size_t pos = input.find('-');
            names.erase(input.substr(pos + 1));
        }
        else
        {
            size_t pos = input.find(':');
            result += input.substr(pos + 1).size() * names.size();
        }
    }
    std::cout << result << std::endl;
    return 0;
}
