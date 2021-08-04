/*
 * 96A. Football
 *
 * Petya loves football very much. One day, as he was watching a football match, he was writing
 * the players' current positions on a piece of paper. To simplify the situation he depected it as a
 * string consisting of zeroes and ones. A zero corresponds to players of one eam; a one
 * corresponds to players of another team. if there are at least 7 players of some team standing
 * one after another, then the situation is considered dangerous. For example, the situation
 * 00100110111111101 is dangerous and 11110111011101 is not. You are given the current
 * situation. Determine whether it is dangerous or not.
 *
 * Input
 * The first input line contains a non-empty string consisting of characters '0' and '1', which
 * represents players. The length of the string does not exceed 100 characters. There's at least
 * one player from each team present on the field.
 *
 * Output
 * Print "YES" if the situation is dangerous. Otherwise, print "NO".
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string input;
    std::cin >> input;
    int sum = 1;
    for(int i = 1; i < input.size(); ++i) {
        if(input.at(i-1) == input.at(i)) {
            ++sum;
            if(sum == 7) {
                break;
            }
        } else {
            sum = 1;
        }
    }
    if(sum == 7) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
