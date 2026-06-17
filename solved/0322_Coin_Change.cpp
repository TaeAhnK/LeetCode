// 0322 Coin Change
// DP
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        if (amount == 0) return 0;
        vector<int> cache (amount + 1, 1000000);

        for (long long int coin : coins)
        {
            if (coin <= amount) cache[coin] = 1;
        }

        for (long long int i = 0; i < cache.size(); i++)
        {
            for (long long int coin : coins)
            {
                if (i - coin >= 0)
                {
                    cache[i] = min(cache[i], cache[i - coin] + 1);
                }
            }
        }

        return (cache[amount] == 1000000) ? -1 : cache[amount];
    }
};

int main()
{
    Solution s;

    return 0;
}
