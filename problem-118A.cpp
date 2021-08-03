/*
 * 118A. String Task
 *
 * Petya started to attend programming lessons. On the first lesson his task was to write a simple
 * program. the program was supposed to do the following: in the given string, consisting of
 * uppercase and lowercase Latin letters, it:
 *
 * - deletes all the vowels,
 * - inserts a character "." before each consonant,
 * - replaces all uppercase consonants with corresponding lowercase ones.
 *
 * Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input
 * is exactly one string, it should return the outpu as a single string, resulting after the program's
 * processing the initial string.
 *
 * Help Petya cope wih tghis easy task.
 *
 * Input
 * The first line represents input string of Petya's program. This string only consists of uppercase
 * and lowercase Latin letters and its length is from 1 to 100, inclusive.
 *
 * Output
 * Print the resulting strng. It is guaranteed that this string is not empty.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isVowel(char a) {
    bool result = false;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y') {
       result = true; 
    }
    return result;
}

int main(int argc, char** argv) {
    std::string vowels = "aoyeui";
    std::string input;
    std::cin >> input;
    std::vector<char> output = {};
    std::for_each(input.begin(), input.end(), [](char & c) {
        c = ::tolower(c);
    });
    for(int i = 0; i < input.size(); ++i) {
        if(!isVowel(input.at(i))) {
            output.push_back('.');
            output.push_back(input.at(i)); 
        }
    }
    for(int i = 0; i < output.size(); ++i) {
        std::cout << output.at(i);
    }
    std::cout << std::endl;
    return 0;
}
