#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> even;
    std::vector<std::pair<int, int>> odd;
    for(int i = 0; i < n; ++i) {
        int input;
        std::cin >> input;
        if(input % 2 == 0) {
            even.push_back(std::make_pair(input, i+1));
        } else {
            odd.push_back(std::make_pair(input, i+1));
        }
    }
    if(odd.size() == 1) {
        std::cout << odd.at(0).second << std::endl;
    } else {
        std::cout << even.at(0).second << std::endl;
    }
    return 0;
}
