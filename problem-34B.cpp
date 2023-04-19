#include <bits/stdc++.h>
 
int main() {
    int n, m;
    std::cin >> n >> m;
    int input;
    std::vector<int> tvs;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        tvs.push_back(input);
    }
    std::sort(tvs.begin(), tvs.end());
    int sum = 0;
    for(int i = 0; i < m; ++i) {
        if(tvs[i] > 0) {
            break;
        } else {
            sum += std::abs(tvs[i]);
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
