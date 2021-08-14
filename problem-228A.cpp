/*
 * Valera the Horse is going to the party with friends. He has been following the fashion trends
 * for a while, and he knows that it is very popular to wear all horseshoes of different color.
 * Valera has got four horseshoes left from the last year, but maybe some of them have the same
 * color. In this case he needs to go to the store and buy some few more horseshoes, not to lose
 * fase in front of his stylish comrades.
 *
 * Fortunately, thw store sells horseshoes of all colors under the sun and Valera has enouh
 * money to buy any four of them. However, in order to save the money, he would like to spend
 * as little money as possible, so you need to help Valera and determine what is the minimum
 * number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.
 *
 * Input
 * The first line contains four space-separated integers s1, s2, s3, s4 (1 <= s1, s2, s3, s4 <= 10^9) - 
 * the colors of horseshoes Valera has.
 *
 * Consider all possible colors indexed with integers.
 *
 * Output
 * Print a single integer - the minimum number of horseshoes Valera needs to buy.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char** argv) {
    std::vector<long long int> input(4);
    long long int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    input.at(0) = s1;
    input.at(1) = s2;
    input.at(2) = s3;
    input.at(3) = s4;
    std::sort(input.begin(), input.end());
    int count = 0;
    for(int i = 1; i < 4; ++i)
        if(input.at(i-1) == input.at(i)) 
            ++count;
    std::cout << count << std::endl;
    return 0;
}
