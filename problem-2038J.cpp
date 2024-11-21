#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int totalPeople = 0;
    while (n--)
    {
        int a;
        char option;
        std::cin >> option >> a;
        if (option == 'P')
        {
            totalPeople += a;
        }
        else
        {
            if (totalPeople < a)
            {
                totalPeople = 0;
                std::cout << "YES\n";
            }
            else if (totalPeople == a)
            {
                totalPeople = 0;
                std::cout << "NO\n";
            }
            else
            {
                totalPeople -= a;
                std::cout << "NO\n";
            }
        }
    }
    return 0;
}
