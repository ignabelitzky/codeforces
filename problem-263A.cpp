/*
 * 263A. Beatiful Matrix
 *
 * You've got a 5x5 matrix, consisting of 24 zeroes and a single number one. Let's index the
 * matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by
 * numbers from 1 to 5 from left to right. In one move, you are allowed to aply one of the two
 * following transformations to the matrix:
 *
 * 1. Swap two neighboring matrix rows, that is, rows with indexes i and i+1 for some integer
 * i(1<=i<5)
 * 2. Swap two neighboring matrix columns, that is, columns with indexes j and j+1 for some
 * integer j(1<=j<5)
 *
 * You think that a matrix looks beatiful, if the single number one of the matrix is located in its
 * middle (in the cell that is on the intersection of the third row and the third column). Count the
 * minimum number of moves needed to make the matrix beatiful.
 *
 * Input
 * The input consists of live lines, each line contains five integers: the j-th integer in the i-th line
 * of the input represents the elemento of the matrix that is located on the intersection of the i-th
 * row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.
 *
 * Output
 * Print a single integer - the minimum number of moves needed to make the matrix beatiful.
 */

#include <iostream>
#include <cmath>

int main(int argc, char **argv) {
    int input[5][5];
    int posX, posY;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            std::cin >> input[i][j];
            if(input[i][j] == 1) {
                posX = i + 1;
                posY = j + 1;
            }
        }
    }
    std::cout << abs(3-posX) + abs(3-posY) << std::endl;
    return 0;
}
