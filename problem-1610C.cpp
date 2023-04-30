#include <bits/stdc++.h>
 
int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n+1], b[n+1];
        for(int i = 1; i <= n; i++)
            std::cin >> a[i] >> b[i];
 
        int lo = 1, hi = n;
        int ans = 1;
 
        while(lo <= hi){
            int mid = (lo+hi)/2;
 
            int poorer = 0, richer = mid-1, got = 0;
            bool f = false;
 
            for(int i = 1; i <= n; i++) {
                if(a[i] >= richer && b[i] >= poorer) {
                    poorer++;
                    richer--;
                    got++;
                }
                if(got == mid) {
                    f = true;
                    break;
                }
            }
 
            if(f) {
                ans = mid;
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
 
        std::cout << ans << std::endl;
    }
    return 0;
}
