#include <iostream>
#include <vector>

void count_numbers(std::vector<int>& array, int& oddCount, int& evenCount)
{
    for(int i = 0; i < array.size(); ++i)
    {
        if (array.at(i) % 2 == 0)
        {
            ++evenCount;
        }
        else
        {
            ++oddCount;
        }
    }
}


int main()
{
    int t;
    std::cin >> t;
    int n;
    while(t--)
    {
        std::cin >> n;
        std::vector<int> array(n);
        int oddCount = 0, evenCount = 0;
        for(int i = 0; i < n; ++i)
        {
            std::cin >> array[i];
        }
        count_numbers(array, oddCount, evenCount); 
        if (oddCount % 2 == 1 || (oddCount > 0 && evenCount > 0))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
    return 0;
}
