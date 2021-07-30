/*
 * 758A. Holiday Of Equality
 *
 * In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the
 * welfare of all citizens in Berland by the expense of the state treasury.
 *
 * Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer
 * in a_i burles (burle is the currency in Berland).
 *
 * You are the royal treasurer, which needs to count the minimum charges of the kingdom on the
 * king's presen. The king can only give money, he hasn't a power to take away them.
 *
 * Input
 * The first line contains the integer n(1 <= n <= 100) - The number of citizens in the kingdom.
 * 
 * The second line contains n integers a_1, a_2, ..., a_n, where a_i(0 <= a_i <= 10^6) - the welfare of
 * the i-th citizen.
 *
 * Output
 * In the only line print the integer S - the minimum number of burles which are had to spend.
 */

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    std::vector<unsigned long int> citizensWelfare = {};
    unsigned long int temp = 0;
    unsigned long int maxValue = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> temp;
        if(temp > maxValue) {
            maxValue = temp;
        }
        citizensWelfare.push_back(temp);
    }
    unsigned long int sum = 0;
    for(int i = 0; i < n; ++i) {
       sum += maxValue - citizensWelfare.at(i); 
    }
    std::cout << sum << std::endl;
    return 0;
}
