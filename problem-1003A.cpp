#include <bits/stdc++.h>
int main() {
    int n;
    std::cin >> n;
    std::vector<std::set<int>> pockets;
    std::set<int> a;
    pockets.push_back(a);
    int pocketQuantity = 1;
    int coin;
    bool inserted = false;
    int j = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> coin; 
        while(!inserted) {
            if(j == pocketQuantity) {
                std::set<int> a;
                pockets.push_back(a);
                ++pocketQuantity;
            }
            if(pockets.at(j).find(coin) != pockets.at(j).end()) {
                ++j;
            } else {
                pockets.at(j).insert(coin);
                inserted = true;
            }
        }
        inserted = false;
        j = 0;
    }
    std::cout << pocketQuantity << std::endl;
    return 0;
}
