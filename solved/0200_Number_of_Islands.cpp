// 0200 Number of Islands
// BFS, Matrix
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, 1, -1, 0};

    bool isValidIndex(int y, int x, int height, int width)
    {
        return 0 <= x && 0 <= y && y < height && x < width; 
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        int height = grid.size();
        int width = grid[0].size();
        int count = 0;

        queue<pair<int, int>> q;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (grid[i][j] == '1') 
                {
                    q.push({i, j});
                    grid[i][j] = '0';
                    count++;

                    while (!q.empty())
                    {
                        auto temp = q.front();
                        q.pop();

                        for (int d = 0; d < 4; d++)
                        {
                            int y = temp.first + dy[d];
                            int x = temp.second + dx[d];
                            if (isValidIndex(y, x, height, width) && grid[y][x] == '1') 
                            {
                                q.push({y, x});
                                grid[y][x] = '0';
                            };
                        }
                    }
                }
            }
        }
        
        return count;
    }
};

int main()
{

    return 0;
}
