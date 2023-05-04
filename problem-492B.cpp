#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    long long int l;
    std::cin >> l;
    std::vector<long long int> lanterns;
    for(int i = 0; i < n; ++i) {
        long long int input;
        std::cin >> input;
        lanterns.push_back(input);
    }
    lanterns.push_back(0);
    lanterns.push_back(l);
    std::sort(lanterns.begin(), lanterns.end());
    long long int max = 0;
    if(lanterns.at(0) != lanterns.at(1)) {
        max = (lanterns.at(1)-lanterns.at(0)) * 2;
    }
    auto last = std::prev(lanterns.end());
    auto second_last = std::prev(last);
    if(*second_last != *last) {
        max = std::max(max, 2 * ((*last) - (*second_last)));
    }
    for(int i = 2; i < lanterns.size()-1; ++i) {
        max = std::max(lanterns.at(i) - lanterns.at(i-1), max);
    }
    std::cout << std::fixed << (double)max / (double)2 << std::endl;
    return 0;
}
