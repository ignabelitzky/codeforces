#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> height;
    int input;
    int a = 1, b = 2;
    int minDistance;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        height.push_back(input);
    }
    minDistance = std::abs(height.at(0) - height.at(1));
    for(int i = 1; i < n-1; ++i) {
        if(minDistance >= std::abs(height.at(i) - height.at(i+1))) {
            a = i+1;
            b = i+2;
            minDistance = std::abs(height.at(i) - height.at(i+1));
        }
    }
    if(minDistance >= std::abs(height.at(height.size()-1) - height.at(0))) {
        a = n;
        b = 1;
    }
    std::cout << a << " " << b << std::endl;
    return 0;
}
