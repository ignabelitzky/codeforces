#include <bits/stdc++.h>

int main() {
    int n, q, l, r;
    std::cin >> n >> q;
    std::string s;
    std::cin >> s;
    int sumP[n+1];
    sumP[0] = 0;
    for(int i = 0; i < s.size(); ++i) {
        sumP[i+1] = (int)s[i] + sumP[i] - 96;
    }
    for(int i = 0; i < q; ++i) {
        std::cin >> l >> r;
        std::cout << sumP[r] - sumP[l-1] << "\n";
    }
    return 0;
}
