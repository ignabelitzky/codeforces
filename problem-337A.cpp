#include <bits/stdc++.h>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> quantities;
    int input;
    for(int i = 0; i < m; ++i) {
        std::cin >> input;
        quantities.push_back(input);
    }
    std::sort(quantities.begin(), quantities.end());
    int minimal = quantities.at(n-1) - quantities.at(0);
    for(int i = 0; i < m-n; ++i) {
        minimal = std::min(minimal, quantities.at(i+n)-quantities.at(i+1));
    }
    std::cout << minimal << std::endl;
    return 0;
}
