#include <iostream>
#include <algorithm>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        long long int n, a, b;
        std::cin >> n >> a >> b;

        long long int groups = n / 3;
        long long int remainder = n % 3;

        long long int groupCost = groups * std::min(3 * a, b);
        long long int remainderCost = std::min(remainder * a, b);

        std::cout << groupCost + remainderCost << std::endl;
    }
    return 0;
}
