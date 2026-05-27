// 0733 Flood Fill
// BFS
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, 1, -1, 0};

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int width = image[0].size();
        int height = image.size();
        int colorToChange = image[sr][sc];

        vector<vector<bool>> visited (height, vector<bool>(width, false));
        
        queue<pair<int, int>> q;

        q.push({sr, sc});

        while (!q.empty())
        {
            auto temp = q.front();
            visited[temp.first][temp.second] = true;
            image[temp.first][temp.second] = color;
            q.pop();

            for (int d = 0; d < 4; d++)
            {
                if (isValidIndex(dy[d]+temp.first, dx[d]+temp.second, width, height) 
                && !visited[dy[d]+temp.first][dx[d]+temp.second] 
                && image[dy[d]+temp.first][dx[d]+temp.second] == colorToChange)
                {
                    q.push({dy[d]+temp.first, dx[d]+temp.second});
                }
            }
        }

        return image;
    }

    bool isValidIndex(int r, int c, int width, int height)
    {
        return (0 <= r) && (r < height) && (0 <= c) && (c < width);
    }
};

int main() {

    Solution sol;


    return 0;
}