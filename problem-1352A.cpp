/*
 * 1352A. Sum of Round Numbers
 *
 * A positive (strictly greater than zero) integer is called round if it is of the form d00...0. In
 * other words, a positive integer is round if all its digits except the leftmos (most significant) are
 * equal to zero. In particular, all numbers from 1 to 9 (inclusive) are round.
 *
 * For example, the following number are round: 4000, 1, 9, 800, 90. The following numbers
 * are 'not' round: 110, 707, 222, 1001.
 *
 * You are given a positive integer n(1 <= n <= 10^4). Represent the number n as a sum of round
 * numbers using the minimum number of summands (addends). In other words, you need to
 * represent the given number n as a sum of the least number of terms each of which is a round
 * number.
 *
 * Input
 * The first line contains an integer t(1 <= t <= 10^4) - the number of test cases in the input.
 * Then t test cases follow.
 *
 * Each test case is a line containing an integer n(1 <= n <= 10^4).
 *
 * Output
 * Print t answers to the test cases. Each answer must begin with an integer k - the minimum
 * number of summands. Next, k terms must follow, each of which is a round number, and their
 * sum is n. the terms can be printed in any order. If there are several answers, print any of them.
 */

#include <iostream>

int main(int argc, char** argv) {
    int t;
    std::cin >> t;
    int n = 0;
    int count = 0;
    int input[5] = {0};
    int j = 0;
    int mul = 10000;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        while(n != 0) {
            if(n % 10 != 0) {
                ++count;
                input[j] = n % 10;
            }
            n /= 10;
            ++j;
        }
        std::cout << count << std::endl;
        for(int k = 4; k >= 0; --k) {
            if(input[k] != 0) {
                std::cout << input[k] * mul << " ";
            }
            mul /= 10;
        }
        mul = 10000;
        for(int l = 0; l < 5; ++l)
            input[l] = 0;
        count = 0;
        j = 0;
        std::cout << std::endl;
    }
    return 0;
}
