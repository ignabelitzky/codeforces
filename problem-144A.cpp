#include <iostream>
#include <limits>

int main() {
    int n;
    std::cin >> n;
    int maxPos = 0, minPos = 0;
    int maxVal = std::numeric_limits<int>::min(), minVal = std::numeric_limits<int>::max();
    int value = 0;
    for(int i = 1; i <= n; ++i) {
        std::cin >> value;
        if(value <= minVal) {
            minVal = value;
            minPos = i;
        }
        if(value > maxVal) {
            maxVal = value;
            maxPos = i;
        }
    }
    if(maxPos > minPos) {
        std::cout << (maxPos-1)+(n-minPos)-1 << std::endl;
    } else {
        std::cout << (maxPos-1)+(n-minPos) << std::endl;
    }
    return 0;
}
