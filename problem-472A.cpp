#include <bits/stdc++.h>

bool isNotPrime(long long int n) {
    if(n <= 1) {
        return true;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    long long int n;
    std::cin >> n;
    std::vector<long long int> notPrimes;
    for(long long int i = 2; i < n; ++i) {
        if(isNotPrime(i)) {
            notPrimes.push_back(i);
        }
    }
    long long int a = 0, b = 0;
    bool find = false;
    for(long long int i = 0; i < notPrimes.size(); ++i) {
        for(int j = i; j < notPrimes.size(); ++j) {
            if(notPrimes[i] + notPrimes[j] == n) {
                a = notPrimes[i];
                b = notPrimes[j];
                find = true;
                if(find)
                    break;
            }
        }
        if(find)
            break;
    }
    std::cout << a << " " << b << std::endl;
    return 0;
}

