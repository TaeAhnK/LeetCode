// 0121 Best Time to Buy and Sell Stock
// DP
// TC : O(n)
// SC : O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {   
        int length = prices.size();
        int currentMax = 0;
        int minprice = prices[0];

        for (int i = 1; i < length; i++)
        {
            minprice = min(minprice, prices[i]);
            currentMax = max(prices[i] - minprice , currentMax);
        }

        return currentMax;
    }
};

int main() {
    vector<int> prices;
    int n;
    
    cout << "Enter prices (Ctrl+D to finish): ";
    while (cin >> n) {
        prices.push_back(n);
    }

    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "\nResult: " << result << endl;

    return 0;
}
