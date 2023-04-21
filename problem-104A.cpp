#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    int dif = n - 10;
    if(dif <= 0) {
        std::cout << 0 << std::endl;
    } else {
        int chances = 0;
        if(dif == 1) {
            chances = 4;
        } else if(dif > 1 && dif < 10) {
            chances = 4;
        } else if(dif == 10) {
            chances = 15;
        } else if(dif == 11) {
            chances = 4;
        } else {
            chances = 0;
        }
        std::cout << chances << std::endl;
    }
    return 0;
}
