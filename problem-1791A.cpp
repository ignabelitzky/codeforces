#include <bits/stdc++.h>

int main() {
    std::string code = "codeforces";
    int t;
    std::cin >> t;
    std::string letter;
    for(int i = 0; i < t; ++i) {
        std::cin >> letter;
        if(code.find(letter) != std::string::npos) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
