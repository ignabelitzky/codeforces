/*
 * 59A. Word
 *
 * Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one
 * word. That's why he decided to invent an extension for his favorite browser that would change
 * the letter's register in every word so that it either only consisted of lowercase letters or, vice
 * versa, only of uppercase ones. At that as little as possible letters should be changed in the
 * word. For example, the word HoUse mus be replaced with house, and the word ViP - with
 * VIP. If a word contains an equal number of uppercase and lowercase letters, you should
 * replace all the letters with lowercase ones. For example, maTRIx should be replaced by
 * matrix. Your task is to use the given method on one given word.
 *
 * Input
 * The first line contains a word s - it consists of uppercase and lowercase Latin letters and
 * possesses the length from 1 to 100.
 *
 * Output
 * Print the corrected word s. If the given word s has strictly more uppercase letters, make the
 * word written in the uppercase register, otherwise - in the lowercase one.
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string s;
    std::cin >> s;
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s.at(i) >= 97) {
            ++lowercaseCount;
        }
    }
    uppercaseCount = s.size() - lowercaseCount;
    if(lowercaseCount >= uppercaseCount) {
        for(int i = 0; i < s.size(); ++i) {
            if(s.at(i) < 97) {
                s.at(i) += 32;
            }
        }
    } else {
        for(int i = 0; i < s.size(); ++i) {
            if(s.at(i) >= 97) {
                s.at(i) -= 32;
            }
        }
    }
    std::cout << s << std::endl;
    return 0;
}