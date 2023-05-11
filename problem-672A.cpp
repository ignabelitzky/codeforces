#include <bits/stdc++.h>

int main() {
    std::string a = "";
    for(int i = 1; i < 500; ++i) {
        a += std::to_string(i);
    }
    int n;
    std::cin >> n;
    std::cout << a.at(n-1) << std::endl;
    return 0;
}
