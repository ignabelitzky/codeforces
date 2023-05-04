#include <bits/stdc++.h>

int main() {
    std::string word = "Timur";
    std::sort(word.begin(), word.end());
    std::set<std::string> permutations;
    do {
        permutations.insert(word);
    } while(std::next_permutation(word.begin(), word.end()));
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::string input;
        std::cin >> input;
        if(permutations.find(input) != permutations.end()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
