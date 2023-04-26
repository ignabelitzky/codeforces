#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
bool is_prime[MAXN + 1];

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i]) {
            for (long long j = 1LL * i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool is_t_prime(long long n) {
    if (n < 4) {
        return false;
    }
    long long sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n != n) {
        return false;
    }
    return is_prime[sqrt_n];
}

int main() {
    sieve();
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (is_t_prime(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
