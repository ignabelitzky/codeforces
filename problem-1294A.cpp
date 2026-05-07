#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    std::vector<int> coins;
    while (t--)
    {
        int a = 0, b = 0, c = 0, n = 0;
        std::cin >> a >> b >> c >> n;
        coins.push_back(a);
        coins.push_back(b);
        coins.push_back(c);
        std::sort(coins.begin(), coins.end());
        n -= coins[2] - coins[0];
        n -= coins[2] - coins[1];
        if (n >= 0 && (n % 3) == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
        coins.clear();
    }
    return 0;
}
