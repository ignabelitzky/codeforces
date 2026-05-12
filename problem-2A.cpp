#include <iostream>
#include <map>
#include <vector>
#include <string>

struct Round
{
    std::string name;
    int score;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Round> rounds;
    std::map<std::string, int> finalScores;

    // Read input and compute final scores
    for (int i = 0; i < n; ++i)
    {
        std::string name;
        int score;

        std::cin >> name >> score;

        rounds.push_back({name, score});

        finalScores[name] += score;
    }

    // Find maximum final score
    int maxScore = -1000000;

    for (const auto& pair : finalScores)
    {
        if (pair.second > maxScore)
        {
            maxScore = pair.second;
        }
    }

    // Replay rounds
    std::map<std::string, int> currentScores;

    for (const auto& round : rounds)
    {
        currentScores[round.name] += round.score;

        if (finalScores[round.name] == maxScore &&
            currentScores[round.name] >= maxScore)
        {
            std::cout << round.name << std::endl;
            return 0;
        }
    }

    return 0;
}
