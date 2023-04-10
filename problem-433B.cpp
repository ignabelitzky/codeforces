#include <bits/stdc++.h>

int main() {
    long long int n;
    std::cin >> n;
    long long int a[n];
    for(long long int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    long long int sump[n+1];
    sump[0] = 0;
    for(long long int i = 0; i < n; ++i) {
        sump[i+1] = sump[i] + a[i];
    }
    std::sort(a, a+n);
    long long int sump2[n+1];
    sump2[0] = 0;
    for(long long int i = 0; i < n; ++i) {
        sump2[i+1] = sump2[i] + a[i];
    }
    long long int m;
    std::cin >> m;
    while(m--) {
        long long int ty, l, r;
        std::cin >> ty >> l >> r;
        l--;
        if(ty == 1) {
            std::cout << sump[r]-sump[l] << std::endl;
        } else {
            std::cout << sump2[r]-sump2[l] << std::endl;
        }
    }
    return 0;
}
