#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;
        std::vector<int> left(n), right(m);
        for (int i = 0; i < n; i++)
            std::cin >> left[i];
        for (int i = 0; i < m; i++)
            std::cin >> right[i];
        
        // Sort both vectors to apply two-pointer technique
        std::sort(left.begin(), left.end());
        std::sort(right.begin(), right.end());

        int count = 0;
        int j = m - 1; // Pointer for the right array, starting from the end

        for (int i = 0; i < n; ++i)
        {
            while (j >= 0 && left[i] + right[j] > k)
            {
                j--; // Move the pointer in right to reduce the sum
            }
            if (j >= 0)
            {
                count += (j + 1); // All pairs with right[0] to right[j] are valid
            }
        }
        
        std::cout << count << std::endl;
    }
    return 0;
}

