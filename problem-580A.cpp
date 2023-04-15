#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<long long int> vec(n);
    int distance = 1, candidate = 1;
    for(int i = 0; i < n; ++i) {
        std::cin >> vec[i];
        if(i > 0) {
            if(vec[i-1] <= vec[i]) {
                ++distance;
                candidate = std::max(candidate, distance);
            } else {
                distance = 1;
            }
        }
    }
    std::cout << candidate << std::endl;
    return 0;
}
