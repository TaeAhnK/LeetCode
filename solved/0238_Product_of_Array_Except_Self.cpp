// 0238 Product of Array Except Self
// Array, Prefix Sum
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;

        vector<int> ans (n, 0);
        
        for (int i = 0; i < n; i++)
        {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        for (int j = n - 1; 0 <= j; j--)
        {
            ans[j] *= suffix;
            suffix *= nums[j];
        }

        return ans;
    }
};


int main()
{
    vector<int> input = {4,5,6,7,0,1,2};

    Solution s;

    printf("%d\n", s.productExceptSelf(input));

    return 0;
}