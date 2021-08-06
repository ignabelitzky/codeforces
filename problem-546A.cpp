/*
 * 546A. Soldier and Bananas
 *
 * A soldier wants to buy w bananas in the shop. He has to pak k dollars for the first banana, 2k
 * dollars fo the second one and so on (in other words, he has to pay i*k dollars for the ith
 * banana).
 *
 * He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w
 * bananas?
 *
 * Input
 * The first line contains three positive integers k, n, w (1 <= k, w <= 1000, 0 <= n <= 10^9), the
 * cost of the first banana, initial number of dollars the soldier has and number of bananas he
 * wants.
 *
 * Output
 * Output one integer - the amount of dollars that the soldier must borrow from his friend. If he
 * doesn't have to borrow money, output 0.
 */

#include <iostream>

int main() {
    long long int k = 0, n = 0, w = 0;
    std::cin >> k >> n >> w;
    for(int i = 1; i <= w; ++i) {
        n -= k * i;
    }
    if(n < 0) {
        std::cout << -n << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}
