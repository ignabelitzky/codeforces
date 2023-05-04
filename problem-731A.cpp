#include <bits/stdc++.h>

int main() {
    std::string input;
    std::cin >> input;
    char location = 'a';
    int movement = 0;
    for(int i = 0; i < input.size(); ++i) {
        movement += std::min(std::abs(location - input.at(i)), 26 - std::abs(location-input.at(i)));
        location = input.at(i);
    }
    std::cout << movement << std::endl;
    return 0;
}
