/*
 * 41A. Translation
 *
 * The translation from the Berland language into the Birland language is not an easy task.
 * Those langugages are very similar: a berlandish word differs from a birlandish word with the
 * same meaning a little: it is spelled (and pronounced reversely. For example, a Berlanish
 * word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake
 * during the <<translation>>. Vasya translated word s from Berlandish into Birlandish as t. Help
 * him: find out if he translated the word correctly.
 *
 * Input
 * the first line contains word s, the second line contains word t. The words consist of lowercase
 * Latin letters. The input data do not consist unnecessary spaces. The words are not empty and
 * their lengths do not exceed 100 symbols.
 *
 * Output
 * If the word t is a word s, written reversely, print YES, otherwise print NO.
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string s = "", t = "";
    std::cin >> s >> t;
    int j = t.size() - 1;
    bool isReversed = false;
    if(t.size() == s.size()) {
        isReversed = true;
        for(int i = 0; i < s.size(); ++i) {
            if(s.at(i) != t.at(j)) {
                isReversed = false;
            }
            --j;
        }
    }
    if(isReversed)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
