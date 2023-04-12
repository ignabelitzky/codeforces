#include <bits/stdc++.h>

int main() {
    long long int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> laptops;
    long long int price, quality;
    for(long long int i = 0; i < n; ++i) {
        std::cin >> price >> quality;
        laptops.push_back(std::make_pair(price, quality));
    }
    std::sort(laptops.begin(), laptops.end());
    for(int i = 0; i < n-1; ++i) {
        if(laptops.at(i).second > laptops.at(i+1).second) {
            std::cout << "Happy Alex\n";
            return 0;
        }
    }
    std::cout << "Poor Alex\n";
    return 0;
}
