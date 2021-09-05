/*
 * 141A. Amusing Joke
 *
 * So the New Year holidays are over. Santa Claus and his colleages can take a rest and have
 * guests at last. When two "New Year and Christmas Men" meet, thear assistants cut out of
 * cardboard the letters from the guest's name and the host's name in honor of this event. Then
 * the hung the letters above the main entrance. One night, when everyone went to bed, someone
 * took all the letters of our characters' names. Then he may have shuffled the letters and put
 * them in one pile in front of the door.
 *
 * The next morning it was impossible to find the culprit who had made the disorder. But
 * everybody wondered whether it is possible to restore the names of the host and his guests from
 * the letters lying at the door? That is, we need to verify that there are no extra letters, and that
 * nobody will need to cut more letters.
 *
 * Help the "New Year and Christmas Men" and their friend to cope with this problem. You are
 * given both inscriptions that hung over the front door the previous night, and a pile of letters that
 * were found at the front door next morning.
 *
 * Input
 * The input file consists of three lines: the first line contains the guest's name, the second line
 * contains the name of the residence host and the third line contains letters in a pile that were
 * found at the door in the morning. All lines are not empty and contain only uppercase Latin
 * letters. The length of each line does not exceed 100.
 *
 * Output
 * Print "YES" without the quotes, if the letters in the pile could be permuted to make the names of
 * the "New Year and Christmas Men". Otherwise, print "NO" without the quotes.
 */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv) {
    std::string str1;
    std::string str2;
    std::string str3;
    std::cin >> str1 >> str2 >> str3;
    std::string str4 = str1.append(str2);
    std::sort(str4.begin(), str4.end());
    std::sort(str3.begin(), str3.end());
    if(str4 == str3) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
