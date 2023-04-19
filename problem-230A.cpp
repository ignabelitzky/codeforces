#include <bits/stdc++.h>

int main() {
    int s, n;
    std::cin >> s >> n;
    std::vector<std::pair<int, int>> dragons;
    int input1, input2;
    for(int i = 0; i < n; ++i) {
        std::cin >> input1 >> input2;
        dragons.push_back(std::pair(input1, input2));
    }
    std::sort(dragons.begin(), dragons.end());
    for(int i = 0; i < n; ++i) {
        if(s <= dragons[0].first) {
            break;
        } else {
            s += dragons[0].second;
            dragons.erase(dragons.begin());
        }
    }
    if(dragons.size() == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
