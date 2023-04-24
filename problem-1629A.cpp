#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        std::vector<int> b(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> a.at(i);
        }
        for(int i = 0; i < n; ++i) {
            std::cin >> b.at(i);
        }
        std::vector<std::pair<int,int>> ram;
        for(int i = 0; i < n; ++i) {
            ram.push_back(std::make_pair(a[i], b[i]));
        }
        std::sort(ram.begin(), ram.end());
        for(int i = 0; i < n; ++i) {
            if (k >= ram.at(i).first) {
                k += ram.at(i).second;
            } else {
                break;
            }
        }
        std::cout << k << std::endl;
    }
    return 0;
}
