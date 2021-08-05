/*
 * 69A. Young Physicist
 *
 * A guy named Vasya attends the final grade of a high school. One day Vasya decided to watch
 * a match of his favorite hockey team. And, as the boy loves hocket very much, even more than
 * physics, he forgot to do the fomework. Specifically, he forgot to complete his physics tasks.
 * Next day the teacher got very angry at Vasya and decided to teach him a lesson. He gave
 * the lazy student a seemingly easy task: You are given an idle body in space and the forces that
 * affect it. The body con be considered as a material point with coordinates (0, 0, 0). Vasya had
 * only to answer thther it is in equilibrium. "Piece of cake" = thought Vasya, we need only to
 * check if the sum of all vectors is equal to 0. So, Vasya began to solve the problem. But later it
 * turned out that there can be lots and lots of these forces, and Vasya can not cope without your
 * help. Help him. Write a porgram that determines whether a body is idle or is moving by the
 * given vectors of forces.
 *
 * Input
 * The first line contains a positive integer n(1 <= n <= 100), then follow n lines containing three
 * integers each: the x_i coordinate, the y_i coordinate and the z_i coordinate of the force vector,
 * applied to the body (-100 <= x_i, y_i, z_i <= 100).
 *
 * Output
 * Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.
 */

#include <iostream>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    int x = 0, y = 0, z = 0;
    int sumX = 0, sumY = 0, sumZ = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX == 0 && sumY == 0 && sumZ == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
