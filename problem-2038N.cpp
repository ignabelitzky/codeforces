#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string s;
        std::cin >> s;
        if (s[0] == s[2])
        {
            std::cout << s[0] << "=" << s[2];
        }
        else if (s[0] < s[2])
        {
            std::cout << s[0] << "<" << s[2];
        }
        else
        {
            std::cout << s[0] << ">" << s[2];
        }
        std::cout << std::endl;
    }
    return 0;
}
