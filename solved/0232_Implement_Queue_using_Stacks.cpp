// 0232 Implement Queue using Stacks
// Stack, Queue

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> a;
    stack<int> b;

    MyQueue() { }
    
    void push(int x) 
    {
        a.push(x);
    }
    
    int pop() 
    {
        int front = peek();
        b.pop();

        return front;
    }
    
    int peek() 
    {
        if (b.empty())
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }

        return b.top();
    }
    
    bool empty() 
    {
        return a.empty() && b.empty();
    }
};


int main()
{

    return 0;
}