#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    for(int i = k; i > 0; --i) {
        if(n % 10 == 0) {
            n /= 10;
            continue;
        }
        --n;
    }
    std::cout << n << std::endl;
    return 0;
}
