/*
 * 723A. The New Year: Meeting Friends
 *
 * There are three frind living on the straight line Ox in Lineland. The first frined lives at the point
 * x1, the second friend lives at the point x2, and the third frind lives at the point x3. They plan to
 * celebrate the New Year together, so they need to meet at one point. What is the minimum total
 * distance they have to travel in order to meet at some point and celebrate the New Year?
 *
 * It's guaranteed that the optimal answer is always integer.
 *
 * Input
 * The first line of the input contains three distinct integers x1, x2, and x3 (1 <= x1, x2, x3 <= 100) -
 * the coordinates of the houses of the first, the second and the third friends respectively.
 *
 * Output
 * Print one integer - the minimum total distance the friends need to travel in order to meet
 * together.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char **argv) {
    std::vector<int> houses;
    houses.clear();
    int input = 0;
    for(int i = 0; i < 3; ++i) {
        std::cin >> input;
        houses.push_back(input);
    }
    std::sort(houses.begin(), houses.end());
    int dis1 = houses.at(1) - houses.at(0);
    int dis2 = houses.at(2) - houses.at(1);
    std::cout << dis1 + dis2 << std::endl;
    return 0;
}
