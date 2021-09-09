/*
 * 1399A. Remove Smallest
 *
 * You are given the array a consisting of n positive (greater than zero) integers.
 *
 * In one move, you can choose two indices i and j (i != j) such that the absolute difference
 * between a_i and a_j is no more than one (|a_i - a_j| <= 1) and remove the smalles of these two
 * elements. If two elements are equal, you can remove any of them (but exactly one).
 *
 * Your task is to find if it is possible to obtain the array consisting of 'only one element' using
 * several (possibly, zero) such moves or not.
 *
 * You have to answer t independent test cases.
 *
 * Input
 * The firt line of the input contains one integer t (1 <= t <= 1000) - the number of test cases.
 * Then t test cases follow.
 *
 * The first line of the test case contains one integer n (1 <= n <= 50) - the length of a. The
 * second line of the test case contains n integers a_1, a_2,...,a_n (1 <= a_i <= 100) where a_i is
 * the i-th element of a.
 *
 * Output
 * For each test case, print the answer. "YES" if it is possible to obtain the array consisting of 'only
 * one element' using several (possibly, zero) moves described in the problem statement, or "NO"
 * otherwise.
 */

#include <vector>
#include <iostream>
#include <algorithm>

int main(int argc, char **argv) {
    int t;
    std::cin >> t;
    int n = 0;
    int input = 0;
    std::vector<int> vect;
    bool yes = true;
    for(int i = 0; i < t; ++i) {
        std::cin >> n;
        for(int j = 0; j < n; ++j) {
            std::cin >> input;
            vect.push_back(input);
        }
        std::sort(vect.begin(), vect.end());
        for(int k = 1; k < n; ++k) {
            if(vect.at(k) - vect.at(k-1) > 1) {
                yes = false;
                break;
            }
        } 
        if(yes) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
        vect.clear();
        yes = true;
    }
    return 0;
}
