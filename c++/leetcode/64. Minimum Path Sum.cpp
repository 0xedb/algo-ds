class Solution
{
public:
  int minPathSum(vector<vector<int>> &grid)
  {
    const int i = grid.size() - 1;
    const int j = grid[0].size() - 1;

    for (int k = 0; k <= i; ++k)
    {
      for (int l = 0; l <= j; ++l)
      {
        if (k > 0 && l > 0)
          grid[k][l] = min(grid[k][l] + grid[k][l - 1], grid[k - 1][l] + grid[k][l]);
        else if (k > 0 || l > 0)
        {
          if (l > 0)
            grid[k][l] += grid[k][l - 1];
          else
            grid[k][l] += grid[k - 1][l];
        }
      }
    }

    return grid[i][j];
  }
};