#include <bits/stdc++.h>

int main() {
    long long int n;
    std::cin >> n;
    long long int *arr = (long long int*) calloc(n+1, sizeof(long long int));
    long long int input;
    for(long long int i = 0; i < n; ++i) {
        std::cin >> input;
        arr[input] = i+1;
    }
    long long int m;
    std::cin >> m;
    long long int vasya = 0;
    long long int petya = 0;
    for(long long int i = 0; i < m; ++i) {
        long long int b;
        std::cin >> b;
        vasya += arr[b];            
        petya += n-arr[b]+1;
    }
    std::cout << vasya << " " << petya << std::endl;
    free(arr);

    return 0;
}
