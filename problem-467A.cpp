/*
 * 467A. George and Accommodation
 *
 * George has recently entered the BSUCP (Berland State University for Cool Programmers).
 * George has a friend Alex who has also en tered the university. Now they are moving into a
 * dormitory.
 *
 * George and Alex want to live in the same room. The dormitory has n rooms in total. At the
 * moment the i-th room has p_i people living in it and the room can accommodate q_i people in
 * total (p_i <= q_i). Your task is to count how many rooms has free place for both George and Alex.
 *
 * Input
 * The first line contains a single integer n(1 <= n <= 100) - the number of rooms.
 *
 * The i-th of the next n lines contains two integers p_i and q_i (0 <= p_i <= q_i <= 100) - the number
 * of people who already live in the i-th room and the room's capacity.
 *
 * Output
 * Print a single integer - the number of rooms where George and Alex can move in.
 */

#include <iostream>

int main(int argc, char** argv) {
    int n = 0;
    std::cin >> n;
    int p = 0, q = 0;
    int count = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> p >> q;
        if((q-p) >= 2) {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
