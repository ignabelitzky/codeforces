#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    if(n == 1) {
        std::cout << "-1" << std::endl;
    } else {
        if(n == 2) {
            std::cout << "2 1" << std::endl;
        } else {
            if(n % 2 == 1) {
                std::cout << "-1" << std::endl;
            } else {
            std::vector<int> perm(n);
            perm[0] = 2;
            perm[1] = 1;
            for(int i = 2; i < n; ++i) {
                perm[i] = perm[i-2] + 2;
            }
            for(auto a : perm) {
                std::cout << a << " ";
            }
            std::cout << std::endl;
            }
        }
    }
    return 0;
}

