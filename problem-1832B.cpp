#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<long long int> sum(n+1);;
        sum[0] = 0;
        std::vector<long long int> elements(n);
        long long int result = 0;
        for(int i = 0; i < n; ++i) {
            std::cin >> elements[i];
        }
        std::sort(elements.begin(), elements.end());
        for(int i = 1; i <= n; ++i) {
            sum[i] = sum[i-1] + elements[i-1];
        }
        for(int i = 0; i <= k; ++i) {
            result = std::max(result, sum[n-(k-i)]-sum[i*2]);
        }
        std::cout << result << std::endl;
    }
    return 0;
}
