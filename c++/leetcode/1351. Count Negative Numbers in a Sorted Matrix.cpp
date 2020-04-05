class Solution
{
public:
  int countNegatives(vector<vector<int>> &grid)
  {
    int found = 0;

    for (auto i : grid)
    {
      int pos = i.size() - 1;
      for (int j = pos; j >= 0; j--)
      {
        if (i[j] >= 0)
          break;
        found++;
      }
    }

    return found;
  }
};

// could use binary search to optimize inner loop