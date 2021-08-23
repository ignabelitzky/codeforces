/*
 * 520A. Pangram
 *
 * A word or a sentence in some language is called a pangram if all the characters of the
 * alphabet of this language appear in it at least once. Pangrams are oftehn used to demonstrate
 * fonts in printing or test the output devices.
 *
 * You are given a string consisting of lowercase and uppercase latin letters. Check whether this
 * string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter
 * occurs in the string in uppercase or lowercase.
 *
 * Input
 * The first line contains a single integer n(1 <= n <= 100) - the number of characters in the
 * string.
 *
 * The second line contains the string. The string consists only of uppercase and lowercase Latin
 * letters.
 *
 * Output
 * Output "YES", if the string is a pangram and "NO" otherwise.
 */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    std::string input;
    std::cin >> input;
    std::for_each(input.begin(), input.end(), [](char & c) {
        c = ::tolower(c);
    });
    std::sort(input.begin(), input.end());
    char letter = 'a';
    for(int i = 0; i < n; ++i) {
       if(input.at(i) == letter) {
            ++letter;
        } 
    }
    if(letter > 'z')
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
