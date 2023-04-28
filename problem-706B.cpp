#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> prices(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    std::sort(prices.begin(), prices.end());
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i) {
        long long int m;
        std::cin >> m;
        if(m < prices.at(0)) {
            std::cout << 0 << std::endl;
        } else if(m >= prices.at(n-1)) {
            std::cout << n << std::endl;
        } else {
            auto it = std::lower_bound(prices.begin(), prices.end(), m+1);
            int index = std::distance(prices.begin(), it);
            std::cout << index << std::endl;
        }
    }
    return 0;
}
