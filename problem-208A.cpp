#include <bits/stdc++.h>

int main() {
    std::string input = "";
    std::cin >> input;
    size_t pos = 0;
    while((pos = input.find("WUB", pos)) != std::string::npos) {
        input.replace(pos, 3, " ");
        pos += 1;
    }
    // Remove spaces at the front of the stirng
    input.erase(input.begin(), std::find_if(input.begin(), input.end(), [](int ch) {
                return !std::isspace(ch);
    }));

    // Remove spaces at the end of the string
    input.erase(std::find_if(input.rbegin(), input.rend(), [](int ch) {
                return !std::isspace(ch);
    }).base(), input.end());

    // Remove duplicate spaces
    auto new_end = std::unique(input.begin(), input.end(), [](char a, char b) {
            return std::isspace(a) && std::isspace(b);
    });
    input.erase(new_end, input.end());
    std::cout << input << std::endl;
    return 0;
}
