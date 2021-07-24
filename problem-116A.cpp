/*
 * 116A. Tram
 *
 * Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of
 * tram's movement. At the i-th stp a_i passengers exit tre tram, while b_i passengers enter it.
 * The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop,
 * all passengers exit so that it becomes empty.
 *
 * Your task is to calculate the tram's minimum capacity such that the number of people inside
 * the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers
 * exit before any entering passenger enters the tram.
 *
 * Input
 * The first line contains a single number n(2 <= n <= 1000) - the number of the tram's stops.
 *
 * Then n lines follow, each contains two integers a_i and b_i (0 <= a_i, b_i <= 1000) - the number of
 * passengers that exits the tram at the i-th stop, and the number of passengers that enter the
 * tram at the i-th stop. The stops are given from the first to the last stop in the order of tram's movement.
 *
 * Output
 * Print a single integer denoting the minimum possible capacityo of the tram (0 is allowed).
 */

#include <iostream>

int main(int argc, char** argv) {
    int n;
    std::cin >> n;
    int a = 0, b = 0;
    int capacity = 0;
    int maxCapacity = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> a >> b; 
        capacity += b - a;
        if(maxCapacity < capacity) {
            maxCapacity = capacity;
        }
    }
    std::cout << maxCapacity << std::endl;
    return 0;
}
