#include <bits/stdc++.h>

int main() {
    std::string codeforces = "codeforces";
    std::string input;
    int t;
    std::cin >> t;
    while(t--) {
        std::cin >> input;
        int count = 0;
        for(int i = 0; i < 10; ++i) {
            if(codeforces.at(i) != input.at(i)) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
