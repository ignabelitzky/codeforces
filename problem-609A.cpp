#include <bits/stdc++.h>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> sizes;
    int input;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        sizes.push_back(input);
    }
    std::sort(sizes.begin(), sizes.end(), std::greater<>());
    int count = 0;
    while(m > 0) {
        m -= sizes.at(count);
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}
