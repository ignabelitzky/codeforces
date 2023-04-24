#include <bits/stdc++.h>

int main() {
    std::vector<int> parcialSum;
    parcialSum.push_back(0);
    int n;
    std::cin >> n;
    int input;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        parcialSum.push_back(parcialSum.at(i)+input);
    }
    int m;
    std::cin >> m;
    for(int i = 0; i < m; ++i) {
        std::cin >> input;
        int pile = std::lower_bound(parcialSum.begin(), parcialSum.end(), input) - parcialSum.begin();
        std::cout << pile << std::endl;
    }
    return 0;
}
