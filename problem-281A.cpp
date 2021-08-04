/*
 * 281A. Word Capitalization
 *
 * Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize
 * the given word.
 *
 * Note, that during capitalization all the letters except the first one remains unchanged.
 *
 * Input
 * A single line contains a non-empty word. This word consists of lowercase and uppercase
 * English letters. The length of the word will not exceed 10^3.
 *
 * Output
 * Output the given word after capitalization.
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string input;
    std::cin >> input;
    if(input.at(0) > 'Z') {
        input.at(0) = input.at(0)-32;
    }
    std::cout << input << std::endl;
    return 0;
}
