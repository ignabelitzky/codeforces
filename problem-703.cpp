/*
 * 703A. Mishka and Game
 *
 * Mishka is a little polar bear. As known, little bears loves spending their free time playing dice
 * for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met
 * her friend Chris, and they started playing the game.
 *
 * Rules of the game are very simple: at first number of rounds n is defined. In every round each
 * of the players throws a cubical dice wih distinct numbers from 1 to 6 written on its faces.
 * Player, whose value after throwing the dice is greater, wins the round. In case if player dice
 * values are equal, no one of them is a winner.
 *
 * In average, player, who won most of the rouns, is the winner of the game. In case if two
 * players won the same number of rounds, the result of the game is draw.
 *
 * Mishka is still very little and can't count wins and losses, so she asked you to watch their
 * game and determine its result. Please help her!
 *
 * Input
 * The first line of the input contains single integer n (1 <= n <= 100) - the number of game rounds.
 *
 * The next n lines contains rounds description. i-th of them contains pair of integers m_i and c_i
 * (1 <= m_i, c_i <= 6) - values on dice upper face after Mishka's and Chris' throws in i-th round
 * respectively.
 *
 * Output
 * If Mishka is the winner of the game, print "Mishka" (without quotes) in the only line.
 *
 * If Chris is the winner of the game, print "Chris" (without quotes) in the only line.
 *
 * If the result of the game is draw, print "Friendship is magic!^^" (without quotes) in
 * the only line.
 */

#include <iostream>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    int m, c;
    int winner = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> m >> c;
        if(c < m) {
            ++winner;
        } else if(c > m) {
            --winner;
        }
    }
    if(winner < 0) {
        std::cout << "Chris" << std::endl;
    } else if(winner > 0) {
        std::cout << "Mishka" << std::endl;
    } else {
        std::cout << "Friendship is magic!^^" << std::endl;
    }
    return 0;
}
