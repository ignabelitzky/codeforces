/*
 * 469A. I Wanna Be the Guy
 *
 * There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend
 * Little Y are addicted to the game. Each of them wants to pass the wole game.
 *
 * Little X can pass only p levels of the game. And Little Y can pass only q levels of the game.
 * You are given the indices of levels Little X can pass and the indices of levels Little Y can pass.
 * Will Little X and Little Y pass the whole game, if they cooperate each other?
 *
 * Input
 * The first line contains a single integer n(1 <= n <= 100).
 *
 * The next line contains an integer p(0 <= p <= n) at first, then follows p distinct integers
 * a_1, a_2,..., a_p (1 <= a_i <= n). These integers denote the indices of levels Little X can pass. The
 * next line contains the levels Little Y can pass in the same format. It's assumed that levels are
 * numbered from 1 to n.
 *
 * Output
 * If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh,
 * my keyboard!" (without the quotes).
 */

#include <iostream>
#include <set>

int main(int argc, char** argv) {
    int levels, p, input;
    std::set<int> solutions;
    std::cin >> levels;
    std::cin >> p;
    for(int i = 0; i < p*2; ++i) {
        std::cin >> input;
        solutions.insert(input); 
    } 
    solutions.size() == levels?std::cout << "I become the guy.":std::cout << "Oh, my keyboard!";
    std::cout << std::endl;
    return 0;
}
