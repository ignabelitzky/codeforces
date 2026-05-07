#include <iostream>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    std::vector<int> numbers;
    while (t--)
    {
        int n = 0, count = 0;
        std::cin >> n;
        while (n--)
        {
            int tmp = 0;
            std::cin >> tmp;
            if (tmp == 2)
                ++count;
            numbers.push_back(tmp);
        }
       if (count % 2 != 0)
          std::cout << -1 << std::endl; 
       else
       {
           count /= 2;
           for (int i = 0; i < numbers.size(); ++i)
           {
               if (numbers[i] == 2)
                   --count;
               if (count == 0)
               {
                   std::cout << i+1 << std::endl;
                   break;
               } 
           }
       }
       numbers.clear();
    }
    return 0;
}
