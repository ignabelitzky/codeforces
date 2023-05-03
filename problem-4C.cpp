#include <bits/stdc++.h>

bool sortBySecond(const std::pair<std::string, int> &a, const std::pair<std::string, int> &b) {
    return (a.second < b.second);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<std::string, int>> users;
    for(int i = 0; i < n; ++i) {
        std::string input;
        std::cin >> input;
        users.push_back(std::make_pair(input, i));
    }
    std::sort(users.begin(), users.end());
    int count = 1;
    std::string compare = users.at(0).first;
    users.at(0).first = "OK";
    for(int i = 1; i < n; ++i) {
        if(compare == users[i].first) {
            users[i].first += std::to_string(count);
            count++;
        } else {
            compare = users[i].first;
            users[i].first = "OK";
            count = 1;
        }
    }
    std::sort(users.begin(), users.end(), sortBySecond);
    for(int i = 0; i < n; ++i) {
        std::cout << users.at(i).first << std::endl;
    }
    return 0;
}
