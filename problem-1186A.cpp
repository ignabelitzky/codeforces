/*
 * 1186A. Vus the Cossack and a Contest
 *
 * Vos the Cossack holds a programming competition, in which n people participate. He decided
 * to award them all with pens and notebooks. It is known that Vus has exactly m pens and k notebooks.
 *
 * Determine whether the Cossack can reward all participants, giving each of them at least
 * one pen and at least one notebook.
 *
 * Input
 * The first line contains integers n, m, and k (1 <= n, m, k <= 100) - the number of
 * participants, the number of pens, and the number of notebooks respectively.
 *
 * Output
 * Print "Yes" if it possible to reward all the participants. Otherwise, print "No".
 *
 * You can print each letter in any case (upper or lower).
 */

#include <iostream>

int main(int argc, char **argv) {
    int n, m, k;
    std::cin >> n >> m >> k;
    if(n > m || n > k) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}
