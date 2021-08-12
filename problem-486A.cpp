/*
 * 486A. Calculating Function
 *
 * For a positive integer n let's define a function f:
 *
 * f(n) = -1 + 2 - 3 + ... + (-1)^n * n
 *
 * Your task is to calculate f(n) for a given integer n.
 *
 * Input
 * The single line contains the positive integer n(1 <= n <= 10^15)
 *
 * Output
 * Print f(n) in a single line.
 */

#include <iostream>

int main(int argc, char** argv) {
    long long int n;
    std::cin >> n;
    if(n % 2 == 0) {
        std::cout << n / 2 << std::endl;
    } else {
        std::cout << -n / 2 - 1 << std::endl;
    }
    return 0;
}
