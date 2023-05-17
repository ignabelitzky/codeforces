#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    int sCol = s[0] - 'a' + 1;
    int sRow = s[1] - '0';
    int tCol = t[0] - 'a' + 1;
    int tRow = t[1] - '0';

    int dx = tCol - sCol;
    int dy = tRow - sRow;

    int moves = std::max(std::abs(dx), std::abs(dy));

    std::cout << moves << std::endl;

    while (dx != 0 || dy != 0) {
        if (dx > 0) {
            std::cout << "R";
            dx--;
        } else if (dx < 0) {
            std::cout << "L";
            dx++;
        }

        if (dy > 0) {
            std::cout << "U";
            dy--;
        } else if (dy < 0) {
            std::cout << "D";
            dy++;
        }

        std::cout << std::endl;
    }

    return 0;
}

