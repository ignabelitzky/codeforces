#include <bits/stdc++.h>


int main() {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    int n, m;
    std::cin >> n >> m;
    for(int i = 0; i < 19; ++i) {
        if(primes[i] == n) {
            if(primes[i+1] == m) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
            break;
        }
    }
    return 0;
}
