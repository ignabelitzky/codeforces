/*
 * 432A. Choosing Teams
 *
 * The Saratov State University Olympiad Programmers Training Center (SSU OPTC) has n
 * students. For each stdudent you know the number of times he/she has participated in the ACM
 * ICPC world programming championship. According to the ACM ICPC rules, each person can
 * participate in the world championship at most 5 times.
 *
 * The head of the SSU OPTC is recently gathering teams to participate in the world
 * championship. Each team must consist of exactly three people, at that, any person cannot be a
 * member of two or more teams. What maximum number of teams can the head make if he
 * wants each team to participate in the world championship with the same members at least k
 * times?
 *
 * Input
 * The first line contains integers, n and k (1 <= n <= 2000; 1 <= k <= 5). The next line contains n
 * integers: y1, y2, ..., yn (0 <= y_i <= 5), where y_i shows the number of times the i-th person
 * participated in the ACM ICPC world championship.
 *
 * Output
 * Print a single number - the answer to the problem.
 */

#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    int n, k;
    std::cin >> n >> k;
    int count = 0;
    int input;
    std::vector<int> students;
    for(int i = 0; i < n; ++i) { 
        std::cin >> input;
        students.push_back(input); 
    }
    for(std::vector<int>::iterator it = students.begin(); it < students.end(); ++it) {
        if(*it+k < 6)
            ++count;
    }
    int result = count/3;
    std::cout << result << std::endl;
    return 0;
}
