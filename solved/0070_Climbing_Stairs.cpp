// 0070 Climbing Stairs
// DP
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int climbStairs(int n) 
    {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int cache1 = 0;
        int cache2 = 1;
        int cache3 = 2;

        for (int i = 3; i < n + 1; i++)
        {
            cache1 = cache2;
            cache2 = cache3;
            cache3 = cache2 + cache1;
        }

        return cache3;

        // vector<int> cache(n + 1, 0);

        // cache[1] = 1;
        // cache[2] = 2;

        // for (int i = 3; i < n + 1; i++)
        // {
        //     cache[i] = cache[i - 1] + cache[i - 2];
        // }

        // return cache[n];
    }
};

int main() {
    int input = 3;
    Solution sol;

    printf("%d\n", sol.climbStairs(input));

    return 0;
}