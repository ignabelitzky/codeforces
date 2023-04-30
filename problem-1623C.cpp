#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int test = 1;
    cin >> test;
    while (test--) {
        int n; cin >> n;
        vector<int> h(n);
        for (auto &v : h) cin >> v;
        int l = *min_element(h.begin(), h.end());
        int r = 1e9;
        while (r - l > 1) {
            vector<int> a = h;
            int m = (l + r) / 2;
            bool ok = true;
            for (int i = n - 1; i >= 2; --i) {
                if (a[i] < m) ok = false;
                int add = (a[i] - m) / 3;
                add = min(add, h[i] / 3);
                a[i] -= 3 * add;
                a[i - 1] += add;
                a[i - 2] += 2 * add;
            }
            if (*min_element(a.begin(), a.end()) < m) ok = false;
            if (ok) l = m;
            else r = m;
        }
        cout << l << "\n";
    }
    return 0;
}
