#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        std::cout << (1 << static_cast<int>(std::log2(n))) - 1 << std::endl;
    }
    return 0;
}
