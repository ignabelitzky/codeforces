#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::string a, b;
    std::cin >> a >> b;
    int result = 0;
    for(int i = 0; i < n; ++i) {
        int x = a[i] - '0';
        int y = b[i] - '0';
        result += std::min(std::abs(x - y), 10 - std::abs(x - y));
    }
    std::cout << result << std::endl;
    return 0;
}
