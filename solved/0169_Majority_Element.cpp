// 0169 Majority Element
// Boyer-Moore Voting Algorithm, Array, Count
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int candidate = 0;
        int count = 0;

        for (int num : nums)
        {
            if (count == 0) 
            {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};

int main()
{

    return 0;
}
