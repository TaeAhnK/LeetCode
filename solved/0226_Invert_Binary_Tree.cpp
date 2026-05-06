// 0226 Invert Binary Tree
// Tree, DFS
// TC : O(n)
// SC : O(n)

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


class Solution 
{
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        queue<TreeNode*> q;
        TreeNode* current = root;

        q.push(root);

        while (!q.empty())
        {
            TreeNode* current = q.front();
            q.pop();
            
            if (current == nullptr) continue;
            TreeNode* temp = current->left;
            current->left = current->right;
            current->right = temp;

            if (current->left != nullptr) q.push(current->left);
            if (current->right != nullptr) q.push(current->right);
        }

        return root;
    }

    TreeNode* buildTree(const vector<int>& nodes) {
        if (nodes.empty() || nodes[0] == -1) return nullptr;
        
        TreeNode* root = new TreeNode(nodes[0]);
        queue<TreeNode*> q;
        q.push(root);
        
        int i = 1;
        while (!q.empty() && i < (int)nodes.size()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if (i < (int)nodes.size() && nodes[i] != -1) {
                curr->left = new TreeNode(nodes[i]);
                q.push(curr->left);
            }
            i++;
            
            if (i < (int)nodes.size() && nodes[i] != -1) {
                curr->right = new TreeNode(nodes[i]);
                q.push(curr->right);
            }
            i++;
        }
        return root;
    }
    
    void printTree(TreeNode* root) {
        if (!root) {
            cout << "[]" << endl;
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<string> res;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr) {
                res.push_back(to_string(curr->val));
                q.push(curr->left);
                q.push(curr->right);
            } else {
                res.push_back("null");
            }
        }
        while (!res.empty() && res.back() == "null") res.pop_back();
        cout << "[";
        for (size_t i = 0; i < res.size(); ++i) {
            cout << res[i] << (i == res.size() - 1 ? "" : ",");
        }
        cout << "]" << endl;
    }
};

int main() {
    Solution sol;

    vector<int> input = {2, 1, 3};

    TreeNode* root = sol.buildTree(input);

    sol.invertTree(root);
    sol.printTree(root);

    return 0;
}