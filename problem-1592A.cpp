/*
 * 1592A. Gamer Hemose
 *
 * One day, Ahmed_Hossam went to Hemose and said "Let's solve a gym contest!". Hemose
 * didn't want to do that, as he was playing Valorant, so he came up with a problem and told it to
 * Ahmed to distract him. Sadly, Ahmed can't solve it... Could you help him?
 *
 * There is an Agent in Valorant, and he has n weapons. The i-th weapon has a damage value
 * a_i, and the Agent will face an enemy whose heats value is H.
 *
 * The Agent will perform one or more moves until the enemy dies.
 *
 * In one move, he will choose a weapon and decrease the enemy's health by its damage value.
 * The enemy will die when his health will become less than or equal to 0. Howeever, not
 * everythins is so easy: the Agent can't choose the same weapon for 2 times in a row.
 *
 * What is the minimum number of times that the Agent will need to use the weapons to kill the
 * enemy?
 *
 * Input
 * Each test contains multiple test cases. The first line contains the number of test cases t
 * (1 <= t <= 10^5). Description of the test cases follows.
 *
 * The first line of each test case contains two integers n and H (2 <= n <= 10^3, 1 <= H <= 10^9)
 * - the number of available weapons and the initial health value of the enemy.
 *
 * The second line of each test case contains n integers a_1, a_2, ..., a_n (1 <= a_i <= 10^9) - the
 * damage values of the weapons.
 *
 * It's guarantedd that the sum of n over all test cases doesn't exceed 2 * 10^5.
 *
 * Output
 * For each test case, print a single integer - the minimum number of times that the Agent will
 * have to use the weapons to kill the enemy.
 */

#include <iostream>

int main(int argc, char **argv) {
    int t;
    std::cin >> t;
    int n, h;
    int data = 0;
    int count = 0;
    int a = 0, b = 0;
    int sum = 0;
    int tmp = 0;
    for(int i = 0; i < t; ++i) {
        std::cin >> n >> h;
        std::cin >> a >> b;
        if(b > a) {
            tmp = a;
            a = b;
            b = tmp;
        }
        for(int j = 2; j < n; ++j) {
            std::cin >> data;
            if(data > b) {
                if(data >= a) {
                    b = a;
                    a = data;
                } else {
                    b = data;
                }
            }
        }
        sum = a + b;
        tmp = h/sum*2;
        h %= sum;
        int output = h==0?tmp:h<=a?tmp+1:tmp+2;
        std::cout << output << std::endl;
        a = 0;
        b = 0;
    }
    return 0;
}
