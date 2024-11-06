#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::map<std::string, int> goals;
    std::string input;
    std::vector<std::string> teams;
    while (n--)
    {
        std::cin >> input;
        if (goals.find(input) != goals.end())
        {
            goals[input]++;
        }
        else
        {
            goals.insert({input, 1});
            teams.push_back(input);
        }
    }
    if (teams.size() > 1) {
        if (goals[teams.at(0)] > goals[teams.at(1)])
        {
            std::cout << teams.at(0);
        }
        else
        {
            std::cout << teams.at(1);
        }
    }
    else
    {
        std::cout << teams.at(0);
    }
    return 0;
}
