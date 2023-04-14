#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    long long int n, k;
    for(int i = 0; i < t; ++i) {
        std::cin >> n >> k;
        if(n % 2 == 0 || n % k  == 0 || (n-k)%2 == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
