/*
 * 110A. Nearly Lucky Number
 *
 * Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose
 * decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744,
 * 4 are lucky and 5, 17, 467 are not.
 *
 * Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of
 * lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
 *
 * Input
 * The only line contains an integer n(1 <= n <= 10^18).
 *
 * Please do not use the %lld specificator to read or write 64-bit numbers in C++. It is preferred
 * to use the cin, cout streams or the %l64d specificator.
 *
 * Output
 * Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the
 * quotes).
 */

#include <iostream>

int main(int argc, char** argv) {
    long long int n;
    std::cin >> n;
    int count = 0;
    int digit;
    while(n > 0) {
        digit = n % 10;
        n = n/10;
        if(digit == 4 || digit == 7)
            ++count;
    }
    if(count == 4 || count == 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
