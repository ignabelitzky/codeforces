#include <iostream>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        int candidate = 0;
        int n, x, tmp;
        std::cin >> n >> x;
        std::vector<int> stations;
        stations.push_back(0);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> tmp;
            stations.push_back(tmp);
        }
        stations.push_back(x); 

        for (int i = 0; i < stations.size() - 1; ++i)
        {
            int diff = 0;
            diff = stations[i+1] - stations[i];
            candidate = candidate < diff ? diff : candidate;
        }

        int lastPos = stations.size() - 1;
        if (candidate < (stations.at(lastPos) - stations.at(lastPos-1)) * 2)
            candidate = (stations.at(lastPos) - stations.at(lastPos-1)) * 2;

        std::cout << candidate << std::endl;
    }
    return 0;
}
