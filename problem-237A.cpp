#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> clients;
    for(int i = 0; i < n; ++i) {
        int h, m;
        std::cin >> h >> m;
        clients.push_back(std::make_pair(h, m));
    }
    std::sort(clients.begin(), clients.end());
    int count = 1;
    int max = 1;
    for(int i = 0; i < n-1; ++i) {
        if(clients.at(i).first == clients.at(i+1).first && clients.at(i).second == clients.at(i+1).second) {
            count++;
            if(count > max) {
                max = count;
            }
        } else {
            count = 1;
        }
    }
    std::cout << max << std::endl;
    return 0;
}
