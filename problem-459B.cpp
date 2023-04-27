#include <bits/stdc++.h>

int main() {
    long long int n;
    std::cin >> n;
    std::vector<long long int> flowers(n);
    for(long long int i = 0; i < n; ++i) {
        std::cin >> flowers[i];
    }
    std::sort(flowers.begin(), flowers.end());
    long long int max = flowers.at(n-1), min = flowers.at(0);
    std::cout << std::abs(min - max) << " ";
    if(max == min) {
        std::cout << n * (n-1)/2 << std::endl;
    } else {
        long long int countMax = 0, countMin = 0;
        for(long long int i = 0; i < n; ++i) {
            if(flowers.at(i) == min) {
                countMin++;
            } else {
                break;
            }
        }
        for(long long int i = n-1; i >= 0; --i) {
            if(flowers.at(i) == max) {
                countMax++;
            } else {
                break;
            }
        }
        std::cout << countMax * countMin << std::endl;
    }
    return 0;
}
