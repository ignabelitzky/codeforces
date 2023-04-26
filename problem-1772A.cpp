#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string input;
        std::cin >> input;
        std::stringstream ss(input);
        int a, b;
        char simb;
        ss >> a >> simb >> b;
        std::cout << a + b << std::endl;
    }
    return 0;
}
