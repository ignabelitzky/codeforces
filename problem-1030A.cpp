/*
 * 1030A. In Search of an Easy Problem
 * 
 * When preparing a tournament, Codeforces coordinators try their best to make the first problem
 * as easy as possible. This time the coordinator had chosen some problem and asked n people
 * about their opinios. Each person answered wheter this problem is easy or hard.
 * 
 * If at least one of these n people has answered that the problem is hard, the coordinator
 * decides to change the problem. For the given responses, check if the problem is easy enough.
 * 
 * Input
 * The first line contains a single integer n(1 <= n <= 100) - the number of peole who were
 * asked to give their opinions.
 * 
 * The second line contains n integers, each integer is either 0 or 1, If i-th integer is 0, then i-th
 * person thinks the problem is easy; if it is 1, then i-th person thinks that the problem is
 * hard.
 * 
 * Ouput
 * Print one word: "EASY" if the problem is easy accordint to all responses, or "HARD" if there is
 * at least one person who thinks the problem is hard.
 * 
 * You may print every letter in any register. "EASY", "easy", "EaSY" and "eAsY" all will be
 * processed correctly.
 */

#include <iostream>

int main(int argc, char** argv) {
	int n = 0;
	std::cin >> n;
	int input = 0;
	bool isEasy = true;
	for (int i = 0; i < n; ++i) {
		std::cin >> input;
		if (input == 1) {
			isEasy = false;
		}	
	}
	isEasy ? std::cout << "EASY" << std::endl: std::cout << "HARD" << std::endl;
	return 0;
}
