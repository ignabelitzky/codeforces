#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> numbers(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> numbers[i];
        }
        int candidate = numbers[0];
        int noCandidate = 0;
        int index = 1;
        if(numbers[0] == numbers[1])  {
            noCandidate = numbers[0];
        } else {
            if(numbers[0] == numbers[2]) {
                candidate = numbers[1];
                index = 2;
                std::cout << index << std::endl;
            } else {
                candidate = numbers[0];
                index = 1;
                std::cout << index << std::endl;
            }
            continue;
        }
        for(int i = 2; i < n; ++i) {
            if(numbers[i] != noCandidate) {
                index = i + 1;
                std::cout << index << std::endl;
                break;
            }
        } 
    }
    return 0;
}
