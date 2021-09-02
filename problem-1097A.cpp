/*
 * 1097A. Gennady and a Card Game
 *
 * Gennady owns a small hotel in the country side where he lives a peaceful life. He loves to take
 * long walks, watch sunsets and play cards with tourists staying in his hotel. His favorite game is
 * called "Mau-Mau".
 *
 * To play Mau-Mau, you need a pack of 52 cards. Each card has a suit (Diamonds - D, Clubs - C,
 * Spades - S, or Hearts - H), and a rank (2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, or A).
 *
 * At the start of the game, there is one card on the table and you have five cards in your gand.
 * You can play a card from your gand if and only if it gas the same rank or the same suit as the
 * card on the table.
 *
 * In order to check if yoou'd be a good playing partner, Gennady gas prepared a task for you.
 * Given the card on the table and five cards in your hand, check if you can play at least one
 * card.
 *
 * Input
 * The first line of the input contains one string which descreves the card on the table. The
 * second line contains five strings which describe the cards in your hand.
 *
 * Each string is two characters long. The first character denotes the rank and belongs to the set
 * {2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, A}. The second character denotes the suit and belongs to
 * the set {D, C, S, H}.
 *
 * All the cards in the input are different.
 *
 * Output
 * If it is possible to play a card from your hand, print one word. "YES". Otherwise, print "NO".
 *
 * You can print each letter in any case (upper or lower).
 */

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    std::string deck;
    std::cin >> deck;
    std::vector<std::string> hand;
    std::string input;
    for(int i = 0; i < 5; ++i) {
        std::cin >> input;
        hand.push_back(input);
    }
    bool good = false;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 2; ++j) {
           if(deck.at(j) == hand.at(i).at(j)) {
                good = true;
            } 
        }
    }
    if(good) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
