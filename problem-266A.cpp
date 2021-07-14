/*
 * 266A. Stones on the Table
 *
 * There are n stones on the table in a row, each of them can be red, green or blue. Count the
 * minimum number of stones to take from the table so that any two neighboring stones had
 * different colors. Stones in a row considered neighboring if there are no other stones
 * between them.
 *
 * Input
 * The first line contains integer n(1 <= n <= 50) - The number of stones on the table.
 *
 * The next line contains string s, which represents the colors of the stones. We'll consider the
 * stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R",
 * if the i-th stone is red, "G", if it's green and "B", if it's blue.
 *
 * Output
 * Print a single integer - the answer to the problem.
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    int n = 0;
    std::cin >> n;
    std::string input;
    std::cin >> input;
    int result = 0;
    if(input.length() > 1) {
        for(int i = 1; i < n; ++i) {
            if(input.at(i-1) == input.at(i)) {
                ++result;
            }
        }
    } 
    std::cout << result << std::endl;
    return 0;
}
