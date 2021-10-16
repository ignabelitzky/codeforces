/*
 * 386A. Second-Price Auction
 *
 * In this problem we consider a special type of an auction, which is called the second-price
 * action. As in regular auction n bidders place a bid which is price a bidder ready to pay. The
 * auction is closed, that is, each bidder secretly informs the organizer of the auction price he is
 * willing to pay. After that, the auction winner is the participant who offered the highest price.
 * however, he py not the price he offers, but the highest price among the offers of other
 * participants (hence the name: the second-price auction).
 *
 * Write a program that reads prices offered by bidders and finds the winner and the price he will
 * pay. Consider that all of the offered prices are different.
 *
 * Input
 * The first line of  the input contains n(2 <= n <= 1000) - number of bidders. The second line
 * contains n distinct integer numbers p1, p2, ..., pn, separated by single spaces
 * (1 <= pi <= 10000), where pi stands for the price offered by the i-th bidder.
 *
 * Output
 * The single output line should contain two integers: index of the winner and the price he will pay.
 * Indices are 1-based.
 */

#include <iostream>

int main(int argc, char **argv) {
    int n;
    std::cin >> n;
    int firstPrice, secondPrice;
    int bidder = 1;
    int tmp;
    std::cin >> firstPrice >> secondPrice;
    if(firstPrice < secondPrice) {
        tmp = firstPrice;
        firstPrice = secondPrice;
        secondPrice = tmp;
        bidder = 2;
    }
    int input;
    for(int i = 3; i <= n; ++i) {
        std::cin >> input;
        if(input > secondPrice) {
            secondPrice = input;
            if(secondPrice > firstPrice) {
                tmp = firstPrice;
                firstPrice = secondPrice;
                secondPrice = tmp;
                bidder = i;
            }
        }
    }
    std::cout << bidder << " " << secondPrice << std::endl;
    return 0;
}
