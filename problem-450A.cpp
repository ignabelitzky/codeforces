#include <bits/stdc++.h>

int main() {
    int n, m;
    std::cin >> n >> m;
    int input;
    std::vector<std::pair<int, int>> childs;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        childs.push_back(std::pair(input, i+1));
    }
    int lastChild = 0;
    while(childs.size() != 0) {
        childs[0].first -= m;
        lastChild = childs[0].second;
        if(childs[0].first <= 0) {
            childs.erase(childs.begin());
        } else {
            childs.push_back(childs[0]);
            childs.erase(childs.begin());
        }
    }
    std::cout << lastChild << std::endl;

    return 0;
}
