#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    std::vector<int> run(4);
    while(t--) { 
        int count = 0;
        for(int i = 0; i < 4; ++i) {
            std::cin >> run[i];
            if(i > 0) {
                if(run[i] > run[0]) {
                    count++;
                }
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
