/*
 * 1328A. Divisibility Problem
 *
 * You are given two positive integers a and b. In one move you can increase a by 1 (replace a
 * with a+1). Your task is to find the minimum number of moves you need to do in order to
 * make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible
 * by b. You have to answer t independet test cases.
 *
 * Input
 * The first line of the input contains one integer t (1 <= t <= 10^4) - the number of test cases.
 * Then t test cases follow.
 *
 * The only line of the test case contains two integers a and b (1 <= a, b <= 10^9).
 *
 * Output
 * For each test case print the answer - the minimum number of moves you neeed to do in order
 * to make a divisible by b.
 */

#include <iostream>

int main(int argc, char** argv) {
    int t;
    std::cin >> t;
    long long int a, b;
    for(int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        std::cout << (b - a % b) % b << std::endl;
    }
    return 0;
}