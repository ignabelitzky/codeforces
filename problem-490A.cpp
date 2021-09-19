/*
 * 490A. Team Olympiad
 *
 * The School N 0 of the capital of Berland has n children strying in it. All the children in this
 * school are gifted: some of them are good at programming, some are good at maths, others are
 * good at PE (Physical Education). Hence, for each child we know value t_i.
 *
 * t_i = 1, if the i-th child is good at programming.
 * t_i = 2, if the i-th child is goot at maths.
 * t_i = 3, if the i-th child is good at PE
 *
 * Each child happens to be good at exactly one of these three subjects.
 *
 * The Team Scientific Decathlon Olympias requires teams of three students. The school teachers
 * decided that the teams will be composed of three children that are good at different subjects.
 * That is, each team must have one mathematician, one programmer and one sportsman. Of
 * course, each child can be a member of no more than one team.
 *
 * What is the maximum number of teams that the school will be able to present at the Olympiad?
 * How should the teams be formed for that?
 *
 * Input
 * The first line contains integer n(1 <= n <= 5000) - the number of children in the school. The
 * second line contains n integers t1, t2, ..., tn (1 <= ti <= 3), where t_i described the skill of the i-th
 * child.
 *
 * Output
 * In the first line output integer w - the larges possible number of teams.
 *
 * Then print w lines, containing three numbers in each line, Each triple represents the indexes of
 * the children formin the team. You can print both the teams, and the numbers in the triples in
 * any orde. The children are numbered from 1 to n in the order of their appearance in the input.
 * Each child must participate in no more than one team. If there are several solutions, print any of them.
 *
 * If no teams can be compiled, print the only line with value w equal to 0.
 */

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int main(int argc, char **argv) {
    int n = 0;
    std::cin >> n;
    std::vector<std::pair<int,int>> children;
    std::vector<int> count(3);
    for(int i = 0; i < 3; ++i) {
        count.at(i) = 0;
    }
    int input = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> input;
        children.push_back(std::make_pair(input, i+1));
        if(input == 1) {
            count.at(0) += 1;
        } else if(input == 2) {
            count.at(1) += 1;
        } else {
            count.at(2) += 1;
        }    
    }

    int programmerIndex = 0;
    int mathIndex = n - count.at(2) - count.at(1);
    int peIndex = n - count.at(2);
    std::sort(count.begin(), count.end());
    std::cout << count.at(0) << std::endl;
    std::sort(children.begin(), children.end());
    if(count.at(0) > 0) {
        for(int i = 0; i < count.at(0); ++i) {
            std::cout << children[programmerIndex].second << " " << children[mathIndex].second << " " << children[peIndex].second << std::endl;
            ++programmerIndex;
            ++mathIndex;
            ++peIndex;
        }
    }
    
    return 0;
}
