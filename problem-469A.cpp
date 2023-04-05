#include <bits/stdc++.h>

int main() {
    int levels;
    std::cin >> levels;
    std::set<int> numbers;
    int input, p, q;
    std::cin >> p;
    std::string result = "Oh, my keyboard!\n";
    for(int i = 0; i < p; ++i) {
        std::cin >> input;
        numbers.insert(input);
    }
    std::cin >> q;
    for(int i = 0; i < q; ++i) {
        std::cin >> input;
        numbers.insert(input);
    }
    if(numbers.size() == levels)
        result = "I become the guy.\n";
    std::cout << result;

    return 0;
}
