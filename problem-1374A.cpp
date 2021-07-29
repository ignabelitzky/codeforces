/*
 * 1374A. Requered Remainder
 *
 * You are given three integers x, y and n. Your task is to find the 'maximum' integer k such that
 * 0 <= k <= n that k mod x = y, where mod is modulo operation. Many programming
 * languages use persent operator % to implement it.
 * 
 * In other words, with given x, y and n you need to find the maximum possible integer from 0 to
 * n that has the remainder y modulo x.
 *
 * You have to answer t independent test cases. It is guaranteed that such k exists for each test
 * case.
 *
 * Input
 * The first line of the input contain one integer t(1 <= t <= 5x10^4) - the number of test
 * cases. The next t lines contain test cases.
 *
 * The only line of the test case contains three integers x, y and n (2 <= x <= 10^9;
 * 0 <= y < x; y <= n <= 10^9).
 *
 * It can be shown that such k always exists under the given constraints.
 *
 * Output
 * For each test case, print the answer - maximum non-negative integer k such that
 * 0 <= k <= n and k mod x = y. It is guaranteed taht the answer always exists.
 */

#include <iostream>

int main(int argc, char** argv) {
    int t = 0;
    std::cin >> t;
    unsigned long int x, y, n, k; 
    int sum = 0;
    for(int i = 0; i < t; ++i) {
        std::cin >> x >> y >> n;
        k = (n - y) / x;
        sum = k * x + y;
        if(sum > n)
            sum = sum - x;
        std::cout << sum << std::endl;
    } 
    return 0;
}
