#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    std::string input;
    int posibilities;
    for(int i = 0; i < t; ++i) {
        std::cin >> input;
        posibilities = 1;
        for(int j = 0; j < input.size(); ++j) {
            if(input.at(j) == '?' && j != 0) {
                posibilities *= 10;
            } else if(input.at(j) == '0' && j == 0) {
                posibilities = 0;
                break;
            }
            if(input.at(j) == '?' && j == 0) {
                posibilities *= 9;
            }
        }
        std::cout << posibilities << std::endl;
    }
    return 0;
}
