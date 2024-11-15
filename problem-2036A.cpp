#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> melodies(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> melodies.at(i);
        }
        bool isMelody = true;
        for (int i = 0; i < n - 1; ++i)
        {
            int difference = std::abs(melodies.at(i) - melodies.at(i+1));
            if (difference != 5 && difference != 7)
            {
                std::cout << "NO\n";
                isMelody = false;
                break;
            }
        }
        if (isMelody)
        {
            std::cout << "YES\n";
        }
    }
    return 0;
}
