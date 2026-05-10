#include <iostream>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        std::cin >> a >> b >> c;
        int annaCounter = a + c;
        int katieCounter = b + c;

        if (annaCounter < katieCounter)
            std::cout << "Second\n";
        else if (annaCounter > katieCounter)
            std::cout << "First\n";
        else if (c % 2 == 0)
            std::cout << "Second\n";
        else
            std::cout << "First\n";
    }
    return 0;
}
