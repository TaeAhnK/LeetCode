// 0973 K Closest Points to Origin
// DC, Quickselect
// TC : O(N)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct Compare
    {
        bool operator() (const vector<int>& a, const vector<int>& b)
        {
            return a[0] * a[0] + a[1] * a[1] > b[0] * b[0] + b[1] * b[1];
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        nth_element(points.begin(), points.begin() + k, points.end(), Compare());
        return vector<vector<int>>(points.begin(), points.begin() + k);
    }
};

int main()
{
    Solution s;

    return 0;
}