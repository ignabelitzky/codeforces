/*
 * A9. Die Roll
 *
 * Yakko, Wakko and Dot, world-famous animaniacs, decided to rest from acting in cartoons, and
 * take a leave to travel a bit. Yakko dreamt to go to Pennsylvania, his Motherland and the
 * Motherland of his ancestors. Wakko thought about Tasmania, its beaches, sun and sea. Dot
 * chose Transylvania as the most mysterious and unpredictable place.
 *
 * But to their great, the leave turned to be very short, so it will be enough to visit one of the
 * three above named places. That's why Yakko, as the cleverest, came up with a truly genius
 * idea: let each o fthe three roll an ordinary six-sided die, and the one with the highest amount of
 * points will be the winner, and will take the other two to the place of his/her dreams.
 *
 * Yakko thrown a die and got Y points, Wakko - W points. It was Dot's turn. But she didn't hurry.
 * Dot wanted to know for sure what were her chances to visit Transylvania.
 *
 * It is known that Yakko and Wakko are true gentlemen, that's why if they have the same amount
 * of points with Dot, they will let Dot win.
 *
 * Input
 * The only line of the input file contains two natural numbers Y and W - the results of Yakko's
 * and Wakko's die rolls.
 *
 * Output
 * Output the required probability in the form of irreducible fraction in formt <<A/B>>, where A - 
 * the numerator, and B - the denominator. If the required probability equals to zero, output
 * <<0/1>>. If the required probability equals to 1, output <<1/1>>.
 */

#include <iostream>

int main(int argc, char** argv) {
    int a = 0, b = 0;
    int temp = 0;
    std::cin >> a >> b;
    if(a < b) {
        a = b;
    }
    temp = 7-a;
    if(temp == 1) {
        std::cout << "1/6" << std::endl;
    } else if(temp == 2) {
        std::cout << "1/3" << std::endl;
    } else if(temp == 3) {
        std::cout << "1/2" << std::endl;
    } else if(temp == 4) {
        std::cout << "2/3" << std::endl;
    } else if(temp == 5) {
        std::cout << "5/6" << std::endl;
    } else if(temp == 6) {
        std::cout << "1/1" << std::endl;
    }
    return 0;
}
