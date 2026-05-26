// 0206 Reverse Linked List
// Linked List
// TC : O(n)
// SC : O(n)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        if (head == nullptr) return head;

        ListNode* current = head;
        vector<ListNode*> nodelist;

        while (current != nullptr)
        {
            nodelist.push_back(current);
            current = current->next;
        }

        for (int i = 1; i < nodelist.size(); i++)
        {
            nodelist[i]->next = nodelist[i - 1];
        }
        nodelist[0]->next = nullptr;

        return nodelist[(int) nodelist.size() - 1];
    }
};

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    ListNode* temp = new ListNode();
    ListNode* current = temp;

    for (int i = 0; i < input.size(); i++)
    {
        ListNode* tmp = new ListNode(input[i], nullptr);
        current->next = tmp;
        current = tmp;
    }

    Solution sol;

    sol.reverseList(temp->next);

    return 0;
}