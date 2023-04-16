#include <iostream>
#include <array>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    array<int, 100001> count{}; // initialize all elements to 0
    int distinct = 0;

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;

        if (count[a] == 0) {
            distinct++;
        }
        count[a]++;

        if (distinct == n) {
            cout << "1";
            for (int j = 1; j <= n; j++) {
                count[j]--;
                if (count[j] == 0) {
                    distinct--;
                }
            }
        } else {
            cout << "0";
        }
    }

    return 0;
}

