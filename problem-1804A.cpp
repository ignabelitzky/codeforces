#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int a, b;
        std::cin >> a >> b;
        int seconds = std::abs(a) + std::abs(b);
        int dif = std::abs(std::min(std::abs(a), std::abs(b))-std::max(std::abs(a), std::abs(b)));
        if(dif > 1) {
            seconds += dif-1;
        }
        std::cout << seconds << std::endl;
    }
    return 0;
}
