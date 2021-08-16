/*
 * 148A. Insomnia cure
 * 
 * <<One dragon. Two dragon. Three dragon>> - The princess was counting. She had trouble
 * falling asleep, and she got bored of counting lambs when she was nine.
 * 
 * However, just counting dragons was boring as well, so she entertained herself at best she
 * could. tonight she imagined that all dragons were here to steal her, and she was fighting them
 * off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail
 * shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally,
 * she threatened every n-th dragon to call her mom, and he withdrew in panic.
 * 
 * How many imaginary dragons suffered moral or physical damage tonight, if the princesss
 * counted a total of d dragons?
 * 
 * Input
 * Input data contains integer numbers k, l, m, n and d, each number in a separate line
 * (1 <= k, l, m, n <= 10, 1 <= d <= 10^5).
 * 
 * Output
 * Output the number of damaged dragons.
 */

#include <iostream>

int main(int argc, char** argv) {
	int k, l, m, n, d;
	std::cin >> k >> l >> m >> n >> d;
	int s = 0;
	for (int i = 1; i <= d; ++i) {
		if (i % k && i % l && i % m && i % n)
			++s;
	}
	std::cout << d - s << std::endl;
	return 0;
}