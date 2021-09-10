/*
 * 431A. Black Square
 *
 * Quite recently, a very smart student named Jury decided that lectures are boring, so he
 * downloaded a game called "Black Square" on his super cool touchscreen phone.
 *
 * In this game, the phone's screen is divided into four vertical strips. Each second, a black square
 * appears on some of the strips. According to the rules of the game, Jury must use this second to
 * touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he
 * counted that he wastes exactly a_i calories on touching the i-th strip.
 *
 * You've got a string s, describing the process of the game and numbers a_1, a_2, a_3, a_4. Calculate
 * how many calories Jury needs to destroy all the squares?
 *
 * Input
 * The first line contains four space-separated integers a_1, a_2, a_3, a_4 (0 <= a_1, a_2, a_3, a_4 <=10^4).
 *
 * The second line contains string s (1 <= |s| <= 10^5), where the i-th character of the string equals
 * "1", if on the i-th second of the game the square appears on the first strip, "2", if it appears on
 * the second strip, "3", if it appears on the third strip, "4", if it appears on the fourth strip.
 *
 * Output
 * Print a single integer - the total number of calories that Jury wastes.
 */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::string input;
    std::cin >> input;
    int calories = 0;
    char character = '\0';
    for(int i = 0; i < input.size(); ++i) {
        character = input.at(i); 
        if(character == '1') {
            calories += a;
        } else if(character == '2') {
            calories += b;
        } else if(character == '3') {
            calories += c;
        } else {
            calories += d;
        }
    }
    std::cout << calories << std::endl; 
    return 0;
}
