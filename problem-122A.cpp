/*
 * 122A. Lucky Division
 *
 * Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose
 * decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4
 * are lucky and 5, 17, 467 are not.
 *
 * Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him
 * find out if the given number n is almost lucky.
 *
 * Input
 * The single line contains an integer n(1 <= n <= 1000) - the number that needs to be checked.
 *
 * Output
 * In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print
 * "NO" (without the quotes).
 */

#include <iostream>

bool is_lucky(int a) {
    int b = 0;
    bool result = true;
    while(result && a > 9) {
        b = a % 10;
        if(b != 4 && b != 7)
            result = false;
        a /= 10;
    }
    if(result)
        if(a != 4 && a != 7) {
            result = false;
        }
    return result;
}

bool is_almost_lucky(int a) {
    bool result = false;
    if((a % 4) == 0 || (a % 7) == 0 || (a % 47) == 0) {
        result = true;
    }
    return result;
}

int main(int argc, char **argv) {
    int n = 0;    
    std::cin >> n;
    bool isLucky = is_lucky(n);
    if(isLucky) {
        std::cout << "YES" << std::endl;
    } else {
        isLucky = is_almost_lucky(n);
        if(isLucky) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
