/*
 * 1411A. In-game Chat
 *
 * You have been assigned to develop a filter for bad messages in the in-game chat. A message
 * is a string S of length n, consisting of lowercase English letters and characters ')'. The
 * message is bad if the number of characters ')' at the end of the string strictly greater than the
 * number of remaining characters. For example, the string ")bc)))" has three parentheses at
 * the end, three remaining characters, and is not considered bad.
 *
 * Input
 * The first line contains the number of test cases t (1 <= t <= 100). Description of the t test
 * cases follows.
 *
 * The first line of each test case contains an integer n (1 <= n <= 100). The second line of each
 * test case contains a string S of length n, consisting of lowercase English letters and
 * characters ')'.
 *
 * Output
 * For each of t test cases, print "Yes" if the string is bad. Otherwise, print "No".
 *
 * You can print each letter in any case (upper or lower).
 */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    int t, n;
    std::cin >> t;
    int count = 0;
    char S[100];
    int j;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        std::cin >> S;
        j = n-1;
        while(S[j] == ')') {
            ++count;
            --j;
        }
        if(count > (n-count)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
        count = 0;
    }
    return 0;
}
