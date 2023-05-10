#include <bits/stdc++.h>

int main() {
    int n, t;
    std::cin >> n >> t;
    t--;
    std::vector<int> cells(n-1);
    int currentPos = 0;
    for(int i = 0; i < n-1; ++i) {
        std::cin >> cells[i];
    }
    while(currentPos < n-1) {
        if(currentPos == t) {
            break;
        } else {
            currentPos += cells.at(currentPos);
        }
    }
    if(currentPos == t) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}
