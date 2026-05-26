// 0104 Maximum Depth of Binary Tree
// Binary Tree, DFS
// TC : O(N)
// SC : O(H)

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int currentDepth = 0;
    int currentMaxDepth = 0;

    int maxDepth(TreeNode* root) 
    {
        currentDepth = 0;
        currentMaxDepth = 0;

        if (root != nullptr) DFS(root);

        return currentMaxDepth;
    }

    void DFS(TreeNode* current)
    {
        currentDepth++;
        currentMaxDepth = max(currentMaxDepth, currentDepth);

        if (current->left != nullptr) DFS(current->left);
        if (current->right != nullptr) DFS(current->right);
        
        currentDepth--;
    }
};

int main() {

    Solution sol;

    return 0;
}