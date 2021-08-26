/*
 * 996A. Hit the Lottery
 *
 * Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to
 * withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills
 * are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after
 * withdrawing his entire balance?
 *
 * Input
 * The first and only line of input contains a single integer n(1 <= n <= 10^9).
 *
 * Output
 * Output the minimum number of bills that Allen could receive.
 */

#include <iostream>

int main(int argc, char** argv) {
    long long int n;
    int dollarBills[5] = {100, 20, 10, 5, 1};
    std::cin >> n;
    long long int sum = 0;
    for(int i = 0; i < 100; ++i) {
        sum += n / dollarBills[i];
        n %= dollarBills[i];
        if(n == 0)
            break;
    }
    std::cout << sum << std::endl;
    return 0;
}
