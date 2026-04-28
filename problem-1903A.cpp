#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t = 0;
    std::cin >> t;
    std::vector<int> values{};
    while (t--)
    {
        int n = 0, k = 0, value = 0;
        std::cin >> n >> k;
        while (n--)
        {
            std::cin >> value;
            values.push_back(value);
        }
        if (std::is_sorted(values.begin(), values.end()))
        {
            std::cout << "YES\n";
        } else if (k > 1)
        {
            std::cout << "YES\n";
        } else
        {
            std::cout << "NO\n";
        }
        values.clear();
    }
    return 0;
}
