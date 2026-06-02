// 0102 Binary Tree Level Order Traversal
// Binary Tree, BFS
// TC : O(N)
// SC : O(N)

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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if (root == nullptr) return vector<vector<int>>();

        vector<vector<int>> ans(1, vector<int>());
        queue<pair<TreeNode*, int>> q;
        
        q.push({root, 0});

        while(!q.empty())
        {
            auto current = q.front();
            q.pop();

            if (ans.size() <= current.second)
            {
                ans.push_back(vector<int>());
            }

            ans[current.second].push_back(current.first->val);

            if (current.first->left != nullptr) 
            {
                q.push({current.first->left, current.second + 1});
            }

            if (current.first->right != nullptr) 
            {
                q.push({current.first->right, current.second + 1});
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    return 0;
}