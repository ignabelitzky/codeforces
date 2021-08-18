/*
 * 61A. Ultra-Fast Mathematician
 *
 * Shapur was an extremely gifted student. He was great at everything including Combinatorics,
 * Algebra, Number Theory, Geometry, Calculus, etc. He was not only smart but extraordinarily
 * fast! He could manage to sum 10^18 numbers in a single second.
 *
 * One day in 230 AD Shapur was trying to find out if any one can possibly do calculations faster
 * than him. As a result he made a very great contest and asked every one to come and take
 * part.
 *
 * In his contest he gave the contestansts many different pairs of numbers. Each number is made
 * from digits 0 or 1. The contestants should write a new number corresponding to the given pair
 * of numbers. The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the
 * two given numbers differ. In the other case the i-th digit of the answer is 0.
 *
 * Shapur made many numbers and first tried his own speed. He saw that he can perform these
 * operations on numbers of length inf (length of a number is number of digits in it) in a glance!
 * He always gives correct answers so he expects the contestants to give correct answers, too.
 * He is good fellow so he won't give anyone very big numbers and he always gives one
 * person number of same length.
 *
 * Now you are going to take part in Shapur's contest. See if toy are faster and more accurate.
 *
 * Input
 * There are two lines in each input. Each of them contains a single number. It is guaranteed that
 * the numbers are made from 0 and 1 only and that their length is same. The numbers may
 * start with 0. The length of each number doesn't exceed 100.
 *
 * Output
 * Write one line - the corresponding answer. Do not omit the leading 0s.
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string number1, number2;
    std::cin >> number1 >> number2;
    std::vector<int> result(number1.size());
    for(int i = 0; i < number1.size(); ++i) {
        result.at(i) = number1.at(i) != number2.at(i)?1:0;
        std::cout << result.at(i);
    }
    std::cout << std::endl;
    return 0;
}
