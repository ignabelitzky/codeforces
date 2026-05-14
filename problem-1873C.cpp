#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> target{    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                                1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
                                1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
                                1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
                                1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
                                1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
                                1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
                                1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
                                1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
                                1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int points = 0;
        std::string input;
        for (int i = 0; i < 10; ++i)
        {
            std::string tmp;
            std::cin >> tmp;
            input.append(tmp);
        }
        for (int i = 0; i < input.size(); ++i)
        {
            if (input[i] == 'X')
                points += target[i];
        }
        std::cout << points << std::endl;
    }
    return 0;
}
