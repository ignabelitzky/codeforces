#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> cards;
    int input;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        cards.push_back(input);
    }
    int l = 0, r = n-1;
    int sumA = 0, sumB = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) {  
            if(cards[l] >= cards[r]) {
                sumA += cards[l];
                l++;
            } else {
                sumA += cards[r];
                r--;
            }
        } else {
            if(cards[l] >= cards[r]) {
                sumB += cards[l];
                l++;
            } else {
                sumB += cards[r];
                r--;
            }
        }
    }
    std::cout << sumA << " " << sumB << std::endl;
    return 0;
}
