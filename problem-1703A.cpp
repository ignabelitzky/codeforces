#include <bits/stdc++.h>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::string input;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        for (auto & c: input)
            c = toupper(c);
        input == "YES"?std::cout << "YES\n":std::cout << "NO\n";
    }
    return 0;
}
