#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, n;
        std::cin >> a >> b >> n;
        int count = 0;
        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
