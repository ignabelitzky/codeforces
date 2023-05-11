#include <bits/stdc++.h>
#include <set>
#include <algorithm>

int main() {
    int n, m, z;
    std::cin >> n >> m >> z;
    std::set<int> enes;
    std::set<int> emes;
    int mul = 1;
    while(n*mul <= z) {
        enes.insert(n*mul);
        mul++;
    }
    mul = 1;
    while(m*mul <= z) {
        emes.insert(m*mul);
        mul++;
    }
    std::set<int> intersection;

    std::set_intersection(enes.begin(), enes.end(), emes.begin(), emes.end(), std::inserter(intersection, intersection.begin()));

    std::cout << intersection.size() << std::endl; 
    return 0;
}
