#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long int n;
        std::cin >> n;
        std::vector<long long int> vec(n);
        for(long long int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }
        std::sort(vec.begin(), vec.end());
        long long int result = std::max(vec.at(0) * vec.at(1), vec.at(n-1) * vec.at(n-2));
        std::cout << result << std::endl;
    }
    return 0;
}
