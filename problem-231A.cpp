/*
 * 231A. Team
 *
 * One day three best friend Petya, Vasya and Tonya decided to form a team and take part in
 * programming contests. Participants are usually offered several problems during programming
 * contests. Long before the start the friends decided that they will implement a problem if at
 * least two of them are sure about the solution. Otherwise, the friends won't write the problem's
 * solution.
 *
 * Input
 * The first input line contains a single integer n(1 <= n <= 1000) - the number of problems in the
 * contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first
 * number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't
 * sure. The sencond number shows Vasya's view on the solution, the third number shows
 * Tonya's view. The numbers on the lines are separated by spaces.
 *
 * Output
 * Print a single integer - the number of problems the friends will implement on the contest.
 */

#include <iostream>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    int a, b, c;
    int count = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> a >> b >> c;
        a += b;
        a += c;
        if(a > 1)
            ++count;
    } 
    std::cout << count << std::endl;
    return 0;
}
