#include <iostream>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    std::vector<int> values{};
    std::vector<int> indexes{};
    while (t--)
    {
        int n = 0, k = 0, tmp = 0;
        bool isPositive = false;
        values.clear();
        indexes.clear();
        std::cin >> n >> k;

        for (int i = 0; i < n; ++i)
        {
            std::cin >> tmp;
            if (tmp == k)
            {
                indexes.push_back(i);
            }
            values.push_back(tmp);
        }

        if (indexes.size() >= 1)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}
