// 0021 Merge Two Sorted Lists
// Linked List
// TC : O(n + m)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;


struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode dummy = ListNode();
        ListNode* end = &dummy;

        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                end->next = list1;
                list1 = list1->next;
            }
            else
            {
                end->next = list2;
                list2 = list2->next;
            }

            end = end->next;
        }

        if (list1 != nullptr) end->next = list1;
        else end->next = list2;

        return dummy.next;
    }
};

int main() {
    Solution sol;

    ListNode* A = new ListNode();
    ListNode* B = new ListNode();

    auto ans = sol.mergeTwoLists(A, B);

    vector<int> printresult;
    ListNode* current = ans;
    while (current != nullptr)
    {
        printresult.push_back(current->val);
        current = current->next;
    }

    cout << "[";
    for (int i = 0; i < printresult.size(); i++)
    {
        if (i > 0) cout << ",";
        cout << printresult[i];
    }
    cout << "]\n";

    current = ans;
    while (current != nullptr)
    {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}