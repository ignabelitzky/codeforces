#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> array(n);
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == array[i] % 2)
            {
                continue;
            }
            else
            {
                if (i % 2 == 0)
                {
                    evenCount++;
                }
                else
                {
                    oddCount++;
                }
            }
        }
        if (evenCount == oddCount)
        {
            std::cout << evenCount << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}