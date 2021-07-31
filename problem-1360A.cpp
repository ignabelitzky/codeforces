/*
 * 1360A. Minimal Square
 *
 * Find the minimum area of a square land on which you can place two identical rectangular
 * a x b houses. the sides of the houses should be parallel to the sides of the desired square
 * land.
 *
 * Formally,
 * - You are given two identical rectangles with side lengths a and b (1 <= a, b <= 100) -
 *   positive integers (you are given just the sizes, but 'not' their positions).
 * - Find the square of the minimum area that contains both given rectangles. Rectangles can
 *   be rotated (both or just one), moved, but the sides of the rectangles should be parallel
 *   to the sides of the desired square.
 *
 * Two rectangles can touch each other (side or corner), but cannot intersect. Rectangles can
 * also touch the sides of the square but must be completely inside it. You can rotate the
 * rectangles. Take a look at the examples for a better understanding.
 *
 * Input
 * The first line contains an integer t(1 <= t <= 10000) - the number of test cases in the input.
 * Then t test cases follow.
 *
 * Each test case is a line containing two integers a, b(1 <= a, b <= 100) - side lengths of the
 * rectangles.
 *
 * Output
 * Print t answers to the test cases. Each answer must be a single integer - minimal area of
 * square land that contains two rectangles with dimensions a x b.
 */

#include <iostream>

int main(int argc, char** argv) {
    int t;
    std::cin >> t;
    int a, b;
    int min, max;
    for(int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        min = a < b? a: b;
        min *= 2;
        max = a > b? a: b;
        min = max > min? max: min;
        std::cout << min*min << std::endl;
    }
    return 0;
}
