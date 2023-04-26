#include <bits/stdc++.h>

bool compare_second(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    int q;
    std::cin >> q;
    while(q--) {
        int n, t;
        std::cin >> n >> t;
        std::vector<int> a(n);
        std::vector<int> b(n);
        std::vector<std::pair<int, int>> videos;
        for(int i = 0; i < n; ++i) {
            std::cin >> a[i];
            a[i] += i;
        }
        for(int i = 0; i < n; ++i) {
            std::cin >> b[i];
        }
        for(int i = 0; i < n; ++i) {
            videos.push_back(std::make_pair(a[i], b[i]));
        }
        int result = -1;
        int max = -1;
        for(int i = 0; i < n; ++i) {
            if(videos[i].first <= t) {
                if(max < videos[i].second) {
                    max = videos[i].second;
                    result = i+1;
                }
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}
