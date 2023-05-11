#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int sum1 = 0, sum2 = 0;
    int divisor = 100000;
    while(t--) {
        int input;
        std::cin >> input;
        for(int i = 0; i < 6; ++i) {
            if(i < 3) {
                sum1 += input/divisor;
            } else {
                sum2 += input/divisor;
            }
            input %= divisor;
            divisor /= 10;
        }
        if(sum1 == sum2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
        sum1 = 0;
        sum2 = 0;
        divisor = 100000;
    }
    return 0;
}
