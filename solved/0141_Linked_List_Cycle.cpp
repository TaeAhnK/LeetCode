// 0141 Linked List Cycle
// Linked List, Floyd's Cycle-Finding Algorithm
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if (head == NULL) return false;

        ListNode* turtle = head;
        ListNode* rabbit = head;

        while (rabbit != NULL || rabbit->next != NULL)
        {
            turtle = turtle->next;
            rabbit = rabbit->next->next;

            if (turtle == rabbit) return true;
        }

        return false;
    }
};

int main() {

    Solution sol;

    return 0;
}