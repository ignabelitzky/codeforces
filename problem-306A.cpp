/*
 * 306A. Candies
 * 
 * Polycarpus has got n candies and m friends (n >= m). He wants to make a New Year present
 * with candies to each frend Polycarpus is planning to present all candies and he wants to do
 * this in the fairest (that is, most equal) manner. He wnats to choose such a_i, where a_i is the
 * number of candies in the i-th friend's present, that the maximum a_i differs from the least a_i as
 * little as possibe.
 *
 * For example, if n is divisible by m ,then he is going to present the same number of candies to
 * all his frineds, that is, the maximum a_i won't differ from the minimum one.
 *
 * Input
 * the single line of the input contains a pair of space-separated positive integers n, m
 * (1 <= n, m <= 100; n >= m) - the number of candies and the number of Polycarpus's friends.
 *
 * Output
 * Print the required sequence a_1, a_2, ..., a_m, where a_i is the number of candies in the i-th
 * friend's present. All numbers a_i must be positive integers, total up to n, the maximum one
 * should differ from the minimum one by the smallest possible value.
 */

#include <iostream>

int main(int argc, char **argv) {
	int n, m;
	std::cin >> n >> m;
	int mod = n % m;
	int div = n / m;
	for(int i = 0; i < m; ++i) {
		if(i < mod) {
			std::cout << div + 1 << std::endl;
		} else {
			std::cout << div << " ";
		}
	}
	return 0;
}