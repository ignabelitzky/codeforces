#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int count = 0;
    int m = 0;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for(std::size_t i = 0; i < arr.size(); ++i) {
            std::cin >> arr[i];
            if(arr[i] == 1) {
                count = 0;
            } else {
                count++;
            }
            m = std::max(m, count);
        }
        std::cout << m << std::endl;
        m = 0;
        count = 0;
    }
    return 0;
}
