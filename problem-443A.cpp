/*
 * 443A. Anton and Letters
 *
 * Recently, Anton has found a set. The set consists of amall English letters. Anton carefully wrote
 * out all the letters from the set in one line, separated by a comma. He also added an opening
 * curved bracket at the beginning of the line and a closing curved bracket at the end of the line.
 *
 * Unfortunately, from time to time Anton would forget reiting some etter and weite it again. He
 * asks you to count the tota number of distinct etters in his set.
 *
 * Input
 * The first and the single line contains the set of letters. T length of the line doesn't exceed
 * 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a
 * closing curved bracket. Betweeen them, small English letters are listed, separated by a comma.
 * Each comma is followed by a space.
 *
 * Output
 * Print a single number - the number of distinct letters in Anton's set.
 */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv) {
    std::string input;
    std::getline(std::cin, input);
    std::sort(input.begin(), input.end()); 
    auto last = input.end();
    for(auto first = input.begin(); first != last; ++first) {
        last = std::remove(std::next(first), last, *first);
    }
    input.erase(last, input.end()); 
    if(input.size() == 2) {
        std::cout << 0 << std::endl;
    } else if(input.size() == 3) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << input.size() - 4 << std::endl;
    }
    return 0;
}
