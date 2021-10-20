/*
 * 318A. Even Odds
 *
 * Being a nonconformist, Volodya is displeased with the current state of things, particularly with
 * the order oof natural numbers (natural number is positive integer number). He is determined to
 * rearrange them. But there are too many natural numbers, so Volodya decided to start with the
 * first n. He writes the following sequence of numbers: firstly all odd integers from 1 to n (in
 * ascending order), then all even integers from 1 to n (also in ascending order). Help our hero to
 * find out which number will stand at the position number k.
 *
 * Input
 * The only line of input contains integers n and k (1 <= k <= n <= 10^12).
 *
 * Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to
 * use the cin, cout streams or the %I64d specifier.
 *
 * Output
 * Print the number that will stand at the position number k after Volodya's manipulations.
 */

#include <iostream>

int main(int argc, char **argv) {
    int long long a, b;
    std::cin >> a >> b;
    if(b*2-1 <= a)
        std::cout << (2*b)-1 << std::endl;
    else
        std::cout << (b-(a+1)/2)*2 << std::endl;
    return 0;
}
