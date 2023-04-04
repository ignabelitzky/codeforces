#include <bits/stdc++.h>

int main() {
    std::string input;
    std::cin >> input;
    char c;
    int i = 0;
    std::string output = "";
    while(i < input.length()) {
        c = input.at(i);
        if(c == '.') {
            output.push_back('0');
            ++i;
        } else {
            c = input.at(i+1);
            if(c == '-') {
                output.push_back('2');
            } else {
                output.push_back('1');
            }
            i += 2;
        }
    }
    std::cout << output << std::endl;
    return 0;
}
