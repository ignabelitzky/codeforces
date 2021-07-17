/*
 * 112A. Petya and Strings
 *
 * Little Petya loves presents. His mum bought him two strings of the same size for his birthday.
 * The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare
 * those two strings lexicographically. The letter's case does not matter, that is an uppercase
 * letter is considered equivalent to the correspondign lowercase letter. Help Petya perform the
 * comparison.
 *
 * Input
 * Each of the first two lines contains a bought string. The string's lenghts range from 1 to 100
 * inclusive. It is guaranteed that the strings are of the same length and also consist of
 * uppercase and lowercase Latin letters.
 *
 * Output
 * If the first string is less than the second one, print "-1". If the second string is less than the first
 * one, print "1". If the strins are equal, print "0". Note hat the letter's case is not taken into
 * consideration when the strins are compared.
 */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv) {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    std::transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    std::transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    
    if(str1.compare(str2) == 0) {
        std::cout << 0 << std::endl;
    } else if(str1.compare(str2) < 0) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << 1 << std::endl;
    }
    return 0;
}
