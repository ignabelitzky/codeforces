#include <bits/stdc++.h>

int main() {
    int t, n;
    std::cin >> t;
    std::string a, b;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        std::cin >> a >> b;
        for(int i = 0; i < n; ++i) {
            if(a[i] == 'G') {
                a[i] = 'B';
            }
            if(b[i] == 'G') {
                b[i] = 'B';
            }
        }
        if(a == b) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
