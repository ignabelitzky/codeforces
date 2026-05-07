#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int n = 0;
        std::cin >> n;
        std::string input;
        std::cin >> input;
        bool flag = true;
        while (n > 1 && flag)
        {
            if (input.front() != input.back())
            {
                n -= 2;
                input.erase(0, 1);
                input.pop_back();
            }
            else
            {
                flag = false;
            }
        }
        std::cout << n << std::endl;
    }
    return 0;
}
