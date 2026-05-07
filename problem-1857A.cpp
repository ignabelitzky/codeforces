#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int n = 0;
        std::cin >> n;
        int qtyOdd = 0, sum = 0;
        while (n--)
        {
            int tmp = 0;
            std::cin >> tmp;
            sum += tmp;
            if (tmp % 2 != 0)
                qtyOdd++;
        }
        if (sum % 2 != 0 && qtyOdd % 2 != 0)
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    return 0;
}
