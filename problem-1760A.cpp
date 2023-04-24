#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::vector<int> input(3);
        for(int i = 0; i < 3; ++i) {
            std::cin >> input.at(i);
        }
        std::sort(input.begin(), input.end());
        std::cout << input.at(1) << std::endl;
    }
    return 0;
}
