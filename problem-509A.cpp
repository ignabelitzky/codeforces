/*
 * 509A. Maximum in Table
 * An n × n table a is defined as follows:
 * 
 * The first row and the first column contain ones, that is: ai, 1 = a1, i = 1 for all i = 1, 2, ..., n.
 * Each of the remaining numbers in the table is equal to the sum of the number above it and the number
 * to the left of it. In other words, the remaining elements are defined by the formula ai, j = ai - 1, j + ai, j - 1.
 * These conditions define all the values in the table.
 *
 * You are given a number n. You need to determine the maximum value in the n × n table defined by the rules above.
 *
 * Input
 * The only line of input contains a positive integer n (1 ≤ n ≤ 10) — the number of rows and columns of the table.
 *
 * Output
 * Print a single line containing a positive integer m — the maximum value in the table.
 */
 
#include <iostream>
 
int main()
{
	int n{};
	std::cin >> n;
 
	switch (n) {
	case 1:
		std::cout << 1;
		break;
	case 2:
		std::cout << 2;
		break;
	case 3:
		std::cout << 6;
		break;
	case 4:
		std::cout << 20;
		break;
	case 5:
		std::cout << 70;
		break;
	case 6:
		std::cout << 252;
		break;
	case 7:
		std::cout << 924;
		break;
	case 8:
		std::cout << 3432;
		break;
	case 9:
		std::cout << 12870;
		break;
	case 10:
		std::cout << 48620;
		break;
	}
 
	/*
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
	{1, 3, 6, 10, 15, 21, 28, 36, 45, 55},
	{1, 4, 10, 20, 35, 56, 84, 120, 165, 220},
	{1, 5, 15, 35, 70, 126, 210, 330, 495, 715},
	{1, 6, 21, 56, 126, 252, 462, 792, 1287, 1210},
	{1, 7, 28, 84, 210, 462, 924, 1716, 3003, 4213},
	{1, 8, 36, 120, 330, 792, 1716, 3432, 6435, 10648},
	{1, 9, 45, 165, 495, 1287, 3003, 6435, 12870, 23518},
	{1, 10, 55, 220, 715, 1210, 4213, 10648, 23518, 48620},
	};
	*/
	return 0;
}
