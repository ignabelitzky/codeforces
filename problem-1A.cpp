/*
 * 1A. Theatre Square
 * Theatre Square in the capital city of Berland has a rectangular shape with the size n x m
 * meters. On the occasion of the city's anniversary, a decision was taken to pave the Square
 * wih square granite flagstones. Each flagstone is of the size a x a.
 *
 * What is the least number of flagstones needed to pave the Square? It's allowed to cover the
 * surface larger that the Theatre Square, but the Square has to be covered. It's not allowed to
 * break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
 *
 * Input
 * The input contains three positive integer numbers in the first line:n, m and a
 * (1 <=n, m, a <= 10^9)
 *
 * Output
 * Write the needed number of flagstones.
 */

#include <iostream>

int main(int argc, char **argv) {
    long long n, m, a;
    std::cin >> n >> m >> a;

    m = m % a?m/a+1:m/a;
    n = n % a?n/a+1:n/a;

    std::cout << n * m << std::endl;
    return 0;
}
