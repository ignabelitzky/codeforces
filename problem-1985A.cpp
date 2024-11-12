#include <iostream>

void swap(std::string& a, std::string& b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string a, b;
        std::cin >> a >> b;
        swap(a, b);
        std::cout << a << " " << b << std::endl;
    }
    return 0;
}
