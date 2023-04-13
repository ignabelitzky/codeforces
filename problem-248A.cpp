#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    int l, r;
    int allClosed = 0, allOpened = 0, openClose = 0, closeOpen = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> l >> r;
        if(l == 0) {
            ++allOpened;
            ++openClose;
        }
        if(l == 1) {
            ++allClosed;
            ++closeOpen;
        }
        if(r == 0) {
            ++allOpened;
            ++closeOpen;
        }
        if(r == 1) {
            ++allClosed;
            ++openClose;
        }
    }
    std::cout << std::min({allClosed, allOpened, openClose, closeOpen}) << "\n";
    return 0;
}
