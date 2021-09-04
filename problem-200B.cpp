/*
 * 200B. Drinks
 *
 * Little Vasya loves oreange juice very much. That's why any food and drink in his kitchen
 * necessarily contains orange juice. There are n drinks in his fridge, the volume fraction of orange
 * juice in the i-th drink equals p_i percent.
 *
 * One day Vasya decided to make himself an orange cocktail. He took equal proportions of each
 * of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.
 *
 * Find the volume fraction of orange juice in the final drink.
 *
 * Input
 * The first input line contains a single integer n(1 <= n <= 100) - the number of orange-containing
 * drinks in Vasya's fridge. The second line contains n integers p_i (0 <= p_i <= 100) - the volume
 * fraction of orange juice in the i-th drink, in percent. The numbers are separated by a space.
 *
 * Output
 * Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be
 * considered correct if the absolute or relative error does not exceed 10^-4.
 */

#include <iostream>

int main(int argc, char **argv) {
    int n;
    std::cin >> n;
    float sum = 0;
    float input = 0;
    for(unsigned int i = 0; i < n; ++i) {
        std::cin >> input;
        sum += input;
    }
    std::cout << sum / n << std::endl;
    return 0;
}
