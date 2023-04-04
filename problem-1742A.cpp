#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    int a, b, c;
    for(int i = 0; i < n; ++i) {
        std::cin >> a >> b >> c;
        if( a == b + c || b == a + c || c == a + b)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}
