/*
 * 151A. Soft Drinking
 *
 * This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink
 * called "Take-It-Light" to warm up a bit. Each bottle has l mililiters of the drink. Also they bought
 * c limes and cut each of them into d slices. After that they found p grams of salt.
 *
 * To make a toast, each friend needs nl mililiters of the drink, a slice of lime and np grams of
 * salt. The friends want to make as many toasts as they can, provided they all drink the same
 * amount. How many toasts can each friend make?
 *
 * Input
 * The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000
 * and no less than 1. The numbers are separated by exactly one space.
 *
 * Output
 * Print a single integer - the number of toasts each friend can make.
 */

#include <iostream>

int main(int argc, char **argv) {
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int minL = ((k*l)/nl)/n;
    int minS = (p/np)/n;
    c *= d;
    c /= n;
    if(c < minL && c < minS) {
        std::cout << c << std::endl;
    } else if(minL < c && minL < minS) {
        std::cout << minL << std::endl;
    } else {
        std::cout << minS << std::endl;
    }
    return 0;
}
