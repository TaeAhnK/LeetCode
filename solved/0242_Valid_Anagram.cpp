// 0242 Valid Anagram
// Hash Table
// TC : O(N)
// SC : O(1)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> temp;
        for (int i = 0; i < (int)s.size(); i++)
        {
            temp[s[i]]++;
            temp[t[i]]--;
        }

        for (auto& pair : temp)
        {
            if (pair.second != 0) return false;
        }

        return true;
    }
};

int main() {
    string inputA = "anagram";
    string inputB = "nagaram";

    Solution sol;

    sol.isAnagram(inputA, inputB) ? printf("true\n") : printf("false\n");

    return 0;
}
