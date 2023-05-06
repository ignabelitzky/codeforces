#include <bits/stdc++.h>

int main() {
    int a, b;
    std::cin >> a >> b;
    int f = 0, s = 0, d = 0;
    for(int i = 1; i <= 6; ++i) {
        if(std::abs(a - i) < std::abs(b - i)) {
            f++;
        } else if(std::abs(b - i) < std::abs(a - i)) {
            s++;
        } else {
            d++;
        }
    } 
    std::cout << f << " " << d << " " << s << std::endl;
    return 0;
}
