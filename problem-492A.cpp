/*
 * 492A. Vanya and Cubes
 *
 * Vanya got n cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid
 * as follows: the top  level of the pyramid must consist of 1 cube, the second level must consist of
 * 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. Thus, the i-th level
 * of the pyramid must have 1+2+...+(i-1)+i cubes.
 *
 * Vanya wants to know what is the maximum height of the pyramid that he can make using the
 * given cubes.
 *
 * Input
 * The first line contains integer n(1<=n<=10^4) - the number of cubes given to Vanya.
 *
 * Output
 * Print the maximum possible height of the pyramid in the single line.
 */

#include <iostream>

int main(int argc, char **argv) {
    int n;
    std::cin >> n;
    int count = 0;
    int result = 0;
    if(n == 1) {
        count = 2;
    } else {
        for(int i = 1; i <= n; ++i) {
            result += (i*(i+1))/2;
            ++count;
            if(result > n)
                break;
        }
    }
    std::cout << count-1 << std::endl; 
    return 0;
}
