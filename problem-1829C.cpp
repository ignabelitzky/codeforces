#include <bits/stdc++.h>
#include <utility>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<std::pair<int, std::string>> books(n);
        for(int i = 0; i < n; ++i) {
            int m;
            std::string skills;
            std::cin >> m >> skills;
            books[i] = std::make_pair(m, skills); 
        }
        std::sort(books.begin(), books.end());
        auto it = std::find_if(books.begin(), books.end(), [](const std::pair<int, std::string>& p) {return p.second == "01";});
        int time = -1;
        if(it != books.end()) {
            auto it2 = std::find_if(books.begin(), books.end(), [](const std::pair<int, std::string>& p) {return p.second == "10";});
            if(it2 != books.end()) {
                time = it->first + it2->first;
            }
        }
        auto it3 = std::find_if(books.begin(), books.end(), [](const std::pair<int, std::string>& p) {return p.second == "11";});
        if(it3 != books.end()) {
            if(time != -1) {
                time = std::min(time, it3->first);
            } else {
                time = it3->first;
            }
        }
        std::cout << time << std::endl;
    }
    return 0;
}
