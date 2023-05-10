#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    bool result = false;
    bool maybe = true;
    int tmp = 0;
    int a, b;
    std::cin >> a >> b;
    tmp = a;
    if(a != b)
        result = true;
    n--;
    while(n--) {
        int a, b;
        std::cin >> a >> b;
        if(a != b) {
            result = true;
        }
        if(tmp < a) {
            maybe = false;
        }
        tmp = a;
    }
    if(result) {
        std::cout << "rated\n";
    } else {
        if(maybe)
            std::cout << "maybe\n";
        else
            std::cout << "unrated\n";
    }
    return 0;
}
