// 0001 Two Sum
// Hashmap
// TC : O(n)
// SC : O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < (int) nums.size(); i++)
        {
            int need = target - nums[i];

            if (mp.find(need) != mp.end())
            {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    auto ans = sol.twoSum(nums, target);

    for (int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}