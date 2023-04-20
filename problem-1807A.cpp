#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int a, b, c;
    while(t--) {
        std::cin >> a >> b >> c;
        if(a + b == c) {
            std::cout << "+\n";
        } else {
            std::cout << "-\n";
        }
    }
    return 0;
}
