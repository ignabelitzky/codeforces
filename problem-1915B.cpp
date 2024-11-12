#include <iostream>
#include <vector>
#include <string>

bool contains(const std::string &s, char c)
{
    for (char ch : s)
    {
        if (ch == c)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::vector<std::string> matrix(3);
        std::cin >> matrix[0] >> matrix[1] >> matrix[2];
        int indexA, indexB;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (matrix[i][j] == '?')
                {
                    indexA = i;
                    indexB = j;
                    break;
                }
            }
        }
        if (!contains(matrix[indexA], 'A'))
        {
            std::cout << "A\n";
        }
        else if (!contains(matrix[indexA], 'B'))
        {
            std::cout << "B\n";
        }
        else
        {
            std::cout << "C\n";
        }
    }
    return 0;
}
