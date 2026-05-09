#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t = 0;
    std::cin >> t;
    std::vector<int> input;
    while (t--)
    {
        int sum = 0;
        for (int i = 0; i < 7; ++i)
        {
            int tmp = 0;
            std::cin >> tmp;
            input.push_back(tmp);
        }
        std::sort(input.begin(), input.end());
        for (int i = 0; i < 7; ++i)
        {
            if (i != 6)
                input[i] *= -1;
            sum += input[i];
        }
        input.clear();
        std::cout << sum << std::endl;
    }
    return 0;
}
