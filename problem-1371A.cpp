/*
 * 1371A. Magical Sticks
 *
 * A penguin Rocher has n sticks. He has exactly one stick with length i for all 1 <= i <= n.
 *
 * He can connect some sticks. If he connects two sticks that have lengths a and b, he gets one
 * stick with length a+b. Two sticks, that were used in the operation disappear from his set and
 * the new connected stick appears in his set and can be used for the next connections.
 *
 * He wants to create the maximum number of sticks that have the same length. It is not
 * necessary to make all sticks have the same length, some sticks can have the other length. How
 * many sticks with the equal length he can create?
 *
 * Input
 * The input consists of multiple test cases. The first line contains a single integer t (1 <= t <= 1000)
 * the number of test cases. Next t lines contain descriptions of test cases.
 *
 * For each test case, the only line contains a single integer n(1 <= n <= 10^9).
 *
 * Output
 * for each test case, print a single integer - the answer to the problem.
 */

#include <iostream>

int main(int argc, char** argv) {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        std::cout << (n+1)/2 << std::endl;
    }
    return 0;
}
