// 0704 Binary Search
// Binary Search
// TC : O(logN)
// SC : O(1)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = (int) nums.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[mid] == target) return ;

            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    Solution sol;

    printf("%d\n", sol.search(nums, target));

    return 0;
}
