#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> tasks(m);
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }

    long long time = 0; // using long long to handle large sums
    int current_position = 1;

    for (int i = 0; i < m; ++i) {
        if (tasks[i] >= current_position) {
            // Move forward without wrapping
            time += tasks[i] - current_position;
        } else {
            // Move forward with wrapping
            time += n - (current_position - tasks[i]);
        }
        current_position = tasks[i];
    }

    cout << time << endl;
    return 0;
}

