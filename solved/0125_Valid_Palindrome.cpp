// 0125 Valid Palindrome
// Two Pointers
// TC : O(N)
// SC : O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        for (int i = 0, j = (int)s.length() - 1; i < j; )
        {
            char a = tolower(s[i]);
            char b = tolower(s[j]);

            if (!isalnum(a))
            {
                i++;
                continue;
            }
            if (!isalnum(b))
            {
                j--;
                continue;
            }

            if (a == b)
            {
                i++;
                j--;
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;
    }

};

int main() {
    string input = "A man, a plan, a canal: Panama";
    
    Solution sol;

    sol.isPalindrome(input) ? printf("true\n") : printf("false\n");

    return 0;
}
