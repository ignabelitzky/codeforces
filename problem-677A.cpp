/*
 * 677A. Vanya and Fence
 *
 * Vanya and his friends are walking along the fence of height h and they do not want the guard
 * to notice them. In order to achieve this the height of each of the frineds should not exceed h. If
 * the height of some person is greater than h he can bend down and then surely won't be
 * noticed by the guard. The height of the i-th person is equal to a_i.
 *
 * Consider the width of the person walking as usual to be equal to 1, while the width of the bent
 * person is equal to 2. Friends want to tal to each other while walking, so they would like to 
 * walk in a single row. What is the minimum width of the road, such that firends can walk in a
 * row and remain unattended by the guard?
 *
 * Input
 * The first line of the input contains two integers n and h (1 <= n <= 1000, 1 <= h <= 1000) - the
 * number of friends and the height of the fence, respectively.
 *
 * The second line contains n integers a_i(1 <= a_i <= 2h), the i-th of them is equal to the height of
 * the i-th person.
 *
 * Output
 * Print a single integer - the minimum possible valid width of the road.
 */ 

#include <iostream>

int main(int argc, char** argv) {
    int n, h;
    std::cin >> n >> h;
    int count = 0;
    int input = 0;
    while(std::cin >> input) {
        if(input > h) {
            count += 2;
        } else {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
