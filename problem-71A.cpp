/*
 * 71A. Way Too Long Words
 * sometimes some words like 'localization' or 'internationalization are so
 * long that writing them many times in one text is quiere tiresome.
 * 
 * Let's consider a word too long, if its length is strictly more than 10 characters. All too long
 * words should be replaced with a special abbreviation.
 *
 * This abbreviation is made like this: we write down the first and the last letter of word and
 * between them we write the number of letters between the first and the last letters. That
 * number is in decimal system and doesn't contain any leading zeroes.
 *
 * Thus, 'localization' will be spelt ad 'l10n', and 'internationalization' will be
 * spelt as 'i18n'.
 *
 * You are suggested to automatize the process of changing the words with abbreviations. At that
 * all too long words should be replaced by the abbreviation and the words that are not too long
 * should not undergo any changes.
 *
 * Input
 * The first line contains an integer n(1 <= n <= 100). Eacu of the following n lines contains one
 * word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100
 * characters.
 *
 * Output
 * Print n lines. The i-th line should contain the result of replacing of the i-th word from the input
 * data.
 */

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    int n = 0;
    std::cin >> n;
    std::vector<std::string> words(n);
    std::string word;
    for(int i = 0; i < n; ++i) {
        std::cin >> word;
        words[i] = word;
    }
    unsigned int wordLength = 0;
    for(int i = 0; i < n; ++i) {
        wordLength = words[i].length(); 
        if(wordLength > 10) {
            std::cout << words[i][0] << wordLength - 2u << words[i][wordLength-1] << std::endl;
        } else {
            std::cout << words[i] << std::endl;
        }
    }
    return 0;
}
