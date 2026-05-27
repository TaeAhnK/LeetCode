// 003 Longest Substring Without Repeating Characters
// Hash Table
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

 
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> lastIndex(128, -1);

        int maxLength = 0;

        for (int i = 0, start = 0; i < s.length(); i++)
        {
            if (lastIndex[s[i]] >= start)
            {
                start = lastIndex[s[i]] + 1;
            }

            lastIndex[s[i]] = i;
            maxLength = max(i - start + 1, maxLength);
        }

        return maxLength;
    }
};

int main() {
    string s = "bbbbb";

    Solution sol;

    printf("%d\n", sol.lengthOfLongestSubstring(s));

    return 0;
}