/*
 * 271A. Beatiful Year
 *
 * It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of
 * 2013 is the first year after the old 1987 with only distinct digits.
 *
 * Now you are succested to solve the following problem: given a year number, find the minimum
 * year number which is strictly larger than the given one and has only distinc digits.
 *
 * Input
 * The single line contains integer y(1000 <= 9000) - the year number.
 *
 * Output
 * Print a single integer - the minimum year number that is strictly larger than y and all it's digits
 * are distinct. It is guaranteed that the answer exists.
 */

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    int y = 0;
    std::cin >> y;
    ++y;
    int x = y;
    std::vector<int> number(4);
    for(int i = 0; i < 4; ++i) {
        number.at(i) = x % 10;
        x /= 10;
    }
    bool yearFound = false;
    while(!yearFound) {
        if(((number.at(0) != number.at(1))) && (number.at(0) != number.at(2)) && (number.at(0) != number.at(3))) {
            if((number.at(1) != number.at(2)) && (number.at(1) != number.at(3))) {
                if(number.at(2) != number.at(3)) {
                   yearFound = true; 
                }
            }
        }
        ++y;
        x = y;
        for(int i = 0; i < 4; ++i) {
            number.at(i) = x % 10;
            x /= 10;
        }
    }
    std::cout << y - 1 << std::endl;
    return 0;
}
