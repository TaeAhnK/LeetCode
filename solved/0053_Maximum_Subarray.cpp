// 0053 Maximum Subarray
// Prefix Sum
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int minV = min(0, nums[0]);
        int maxV = nums[0];
        int psum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            psum = psum + nums[i];
            maxV = max(maxV, psum - minV);
            minV = min(minV, psum);
        }

        return maxV;
    }
};


int main()
{
    vector<int> input = {-2, 1};

    Solution s;

    printf("%d\n", s.maxSubArray(input));

    return 0;
}