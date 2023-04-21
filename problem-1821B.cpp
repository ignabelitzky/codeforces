#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        std::vector<int> arr2(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        for(int i = 0; i < n; ++i) {
            std::cin >> arr2[i];
        }

        int l = 0, r = n-1;
        while(arr[l] == arr2[l])
            l++;
        while(arr[r] == arr2[r])
            r--;
        while(arr2[l] >= arr2[l-1] && l-1 >= 0)
            l--;
        while(arr2[r] <= arr2[r+1] && r+1 < n)
            r++;
        std::cout << l+1 << " " << r+1 << std::endl;
    }
    return 0;
}
