// 0235 Lowest Common Ancestor of a Binary Search Tree
// Binary Search Tree
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        TreeNode* current = root;

        while (current)
        {
            if (current->val < p->val && current->val < q->val)
            {
                current = current->right;
            }
            else if (current->val > p->val && current->val > q->val)
            {
                current = current->left;
            }
            else
            {
                return current;
            }
        }

        return NULL;
    }
};
int main() {
    Solution sol;


    return 0;
}