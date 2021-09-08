/*
 * 1409A. Yet Another Two Integers Problem
 *
 * You are given two integers a and b.
 *
 * In one move, you can choose some integer k from 1 to 10 and add it to a or subtract it from a.
 * In other words, you choose an integer k in [1, 10] and perform a := a + k or a := a - k.
 * You may use 'different' values of 'k' in different moves.
 *
 * Your task is to find the 'minimum number of moves required to obtain b from a.
 *
 * You have to answer t independent test cases.
 *
 * Input
 * The first line of the input contains one integer t(1 <= t <= 2*10^4) - the number of test cases.
 * Then t test cases follow.
 *
 * The only line of the test case constains two integers a and b (1 <= a, b <= 10^9).
 *
 * Output
 * For each test case, print the answer: the minimum number of moves required to obtain b from a.
 */

#include <iostream>

int main(int argc, char **argv) {
    int n;
    std::cin >> n;
    long long int a, b, c;
    long long int count = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> a >> b; 
        if(a == b) {
            std::cout << count << std::endl;
        } else {
            if(b < a) {
                c = a;
                a = b;
                b = c;
            }
            count = (b-a)/10;
            count += (b-a)%10?1:0;
            std::cout << count << std::endl;
        }
        count = 0;
    }
    return 0;
}
