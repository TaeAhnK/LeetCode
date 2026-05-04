// 0020 Valid Parentheses
// Stack
// TC : O(n)
// SC : O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stk;

        for (int i = 0; (int) i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
                stk.push('(');
                break;
            case '{':
                stk.push('{');
                break;
            case '[':
                stk.push('[');
                break;
            case ')':
                if (!stk.empty() && stk.top() == '(') stk.pop();
                else return false;
                break;
            case '}':
                if (!stk.empty() && stk.top() == '{') stk.pop();
                else return false;
                break;
            case ']':
                if (!stk.empty() && stk.top() == '[') stk.pop();
                else return false;
                break;            
            default:
                break;
            }
        }

        if (stk.empty()) return true;
        
        return false;
    }
};

int main() {
    Solution sol;

    string s = "()";

    auto ans = sol.isValid(s);

    ans ? cout << "true\n" : cout << "false\n";

    return 0;
}