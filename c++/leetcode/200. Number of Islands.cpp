class Solution
{
public:
  int full_island(vector<vector<char>> &, int, int);
  int numIslands(vector<vector<char>> &grid)
  {

    if (!grid.size())
      return 0;
    int islands = 0;

    for (int i = 0; i < grid.size(); ++i)
    {
      for (int j = 0; j < grid[i].size(); ++j)
      {
        if (grid[i][j] == '1')
          islands += full_island(grid, i, j);
      }
    }

    return islands;
  }
};

int Solution::full_island(vector<vector<char>> &grid, int i, int j)
{
  if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0')
    return 0;

  grid[i][j] = '0';

  full_island(grid, i + 1, j);
  full_island(grid, i - 1, j);
  full_island(grid, i, j + 1);
  full_island(grid, i, j - 1);

  return 1;
}