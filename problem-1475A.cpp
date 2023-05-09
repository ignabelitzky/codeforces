#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool has_odd_divisor(ll n) {
    if (n % 2 == 0) {
        while (n % 2 == 0) {
            n /= 2;
        }
    }
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return true;
        }
    }
    return n > 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (has_odd_divisor(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

