// 0133 Clone Graph
// Graph, BFS, Hash Table
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) 
    {
        if (node == nullptr) return nullptr;

        queue<Node*> q;
        unordered_map<Node*, Node*> nodelist;

        nodelist[node] = new Node(node->val);

        q.push(node);
        
        while (!q.empty())
        {
            Node* current = q.front();
            q.pop();
            
            for (Node* n : current->neighbors)
            {
                if (nodelist.find(n) == nodelist.end())
                {
                    nodelist[n] = new Node(n->val);
                    q.push(n);
                }
                nodelist[current]->neighbors.push_back(nodelist[n]);
            }
        }

        return nodelist[node];
    }
};

int main()
{
    Solution s;

    return 0;
}