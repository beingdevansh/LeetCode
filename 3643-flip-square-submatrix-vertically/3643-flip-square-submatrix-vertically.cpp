class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int a = x, b = k + x - 1; a < b; a++, b--)
        {
            for(int j = y; j < y + k; j++)
            {
                swap(grid[a][j], grid[b][j]);
            }
        }

        return grid;
    }
};