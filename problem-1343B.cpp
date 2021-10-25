/*
 * 1343B. Balanced Array
 *
 * You are given a positive integer n, it is guaranteed that n is even (i.e. divisible by 2).
 *
 * You want to construct the array a of length n such that:
 *
 * - The first n/2 elements of a are even (divisible by 2);
 * - the second n/2 elements of a are odd (not divisible by 2);
 * - all elements of a re distinct and positive;
 * - the sum of the first half equals to the sum of the second half.
 *
 * If there are multiple answers, you can print any. It is not guaranteed that the answer exists.
 *
 * You have to answer t independent test cases.
 *
 * Input
 * The first line of the input contains on integer t (1 <= t <= 10^4) - the number of test cases.
 * Then t test cases follow.
 *
 * The only line of the test case contains one integer n (2 <= n <= 2*10^5) - the length of the
 * array. It is guaranteed that n is even (i.e divisible by 2).
 *
 * It is guaranteed that the sum of n over all test cases does not exceed 2*10^5.
 *
 * Output
 * For each test case, print the answer - "NO" (without quotes), if there is no suitable answer for
 * the given test case or "YES" in the first line and any suitable array a1, a2,..., an (1 
 * <= ai <= 10^9) satisfying conditions from the problem statement on the second line.
 */

#include <iostream>

int main(int argc, char **argv) {
    int t, n;
    std::cin >> t;
    int h = 2;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        if((n/2) % 2 == 1) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
            for(int i = 1; i <= n/2; ++i)
                std::cout << i*2 << " ";
            for(int i = 1; i < n/2; ++i)
                std::cout << i*2-1 << " ";
            std::cout << n + n/2-1 << std::endl;
        }
    }
    return 0;
}
