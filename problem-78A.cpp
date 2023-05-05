#include <bits/stdc++.h>

int main() {
    std::string inputLine;
    bool result = true;
    for(int i = 0; i < 3; ++i) {
        std::getline(std::cin, inputLine);
        std::string outputString;
        for(char c : inputLine) {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                outputString += c;
            }
        }
        if(i % 2 == 0) {
            if(outputString.size() != 5) {
                result = false;
            }
        }
        if(i % 2 == 1) {
            if(outputString.size() != 7) {
                result = false;
            }
        }
    }
    if(result) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
