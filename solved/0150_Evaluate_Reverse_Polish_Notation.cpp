// 0150 Evaluate Reverse Polish Notation
// Stack
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++)
        {
            int a, b;
            if (tokens[i] == "+")
            {
                a = st.top();
                st.pop();

                b = st.top();
                st.pop();

                st.push(a + b);
            }
            else if (tokens[i] == "-")
            {
                a = st.top();
                st.pop();

                b = st.top();
                st.pop();

                st.push(b - a);
            }
            else if (tokens[i] == "*")
            {
                a = st.top();
                st.pop();

                b = st.top();
                st.pop();

                st.push(a * b);
            }
            else if (tokens[i] == "/")
            {
                a = st.top();
                st.pop();

                b = st.top();
                st.pop();

                st.push((int) (b / a));
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};

int main()
{
    vector<string> input = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    Solution s;

    printf("%d", s.evalRPN(input));
    return 0;
}
