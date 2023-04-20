#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> groups(n);
    std::vector<int> quantities(5);
    for(int i = 0; i < 5; ++i) {
        quantities[i] = 0;
    }
    for(int i = 0; i < n; ++i) {
        std::cin >> groups[i];
        quantities[groups[i]]++;
    }
    int total = quantities[4] + quantities[3] + quantities[2] / 2;
    quantities[1] -= quantities[3];
    if(quantities[2] % 2 == 1) {
        total += 1;
        quantities[1] -= 2;
    }
    if(quantities[1] > 0) {
        total += (quantities[1] + 3) / 4;
    }
    std::cout << total << std::endl;
    return 0;
}
