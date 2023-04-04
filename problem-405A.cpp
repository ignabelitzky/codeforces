#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    int input;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        a.push_back(input);
    }
    std::sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i) {
        std::cout << a.at(i);
        if (i != n-1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
