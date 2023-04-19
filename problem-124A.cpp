#include <bits/stdc++.h>

int main() {
    int n, a, b;
    std::cin >> n >> a >> b;
    std::set<int> first;
    std::set<int> second;
    for(int i = a+1; i <= n; ++i) {
        first.insert(i);
    }
    for(int i = std::abs(b-n); i <= n; ++i) {
        second.insert(i);
    }
    std::set<int> intersection;
    std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), std::inserter(intersection, intersection.begin()));
    std::cout << intersection.size() << std::endl;
    return 0;
}
