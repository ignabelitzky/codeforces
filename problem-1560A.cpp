/*
 * 1560A. Dislike of Threes
 *
 * Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal
 * representation. Integers that meet both conditions are disliked by Pollycarp, too.
 *
 * Polycarp starts to write out the positive (greater than 0) integers which he likes:
 * 1, 2, 4, 5, 7, 8, 10, 11, 14, 16, .... Output the k-th element of this sequence (the elements
 * are numbered from 1).
 *
 * Input
 * The first line contains one integer t(1 <= t <= 100) - the number of test cases. Then t test
 * cases follow.
 *
 * Each test case consists of one line containing one integer k(1 <= k <= 1000).
 *
 * Output
 * For each test case, output in a separate line one integer x - the kth element of the
 * sequence that was written out by Polycarp.
 */

#include <iostream>

int main(int argc, char** argv) {
    int numbers[1000] = {};
    int result[100];
    int j = 1;
    for(int i = 0; i < 1000; ++i) {
        while((j%3==0) || ((j%10)==3))
            ++j;
        numbers[i] = j;
        ++j;
    }
    int t = 0;
    std::cin >> t;
    int k = 0;
    for(int i = 0; i < t; ++i) {
        std::cin >> k;
        result[i] = numbers[k-1];
    }
    for(int i = 0; i < t; ++i) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}
