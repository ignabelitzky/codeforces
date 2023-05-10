#include <bits/stdc++.h>

bool isSpruce(std::vector<std::vector<int>>& tree, int vertex) {
    if(tree[vertex].empty())
        return true;
    int leafChildrenCount = 0;
    for(auto child : tree[vertex]) {
        if(!isSpruce(tree, child))
            return false;
        if(tree[child].empty())
            leafChildrenCount++;
    }
    return leafChildrenCount >= 3;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> tree(n + 1);;
    for(int i = 2; i <= n; ++i) {
        int parent;
        std::cin >> parent;
        tree[parent].push_back(i);
    }
    if(isSpruce(tree, 1)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
