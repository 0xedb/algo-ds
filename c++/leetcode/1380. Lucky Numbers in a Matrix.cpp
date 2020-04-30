class Solution
{
public:
  vector<int> luckyNumbers(vector<vector<int>> &matrix)
  {
    vector<int> ans;

    int k = matrix.size();
    int col = matrix[0].size();
    int row = 0;

    while (row < k)
    {
      auto setcol = 0;
      auto _min = matrix[row][0];

      for (int j = 0; j < col; ++j)
      {
        if (matrix[row][j] < _min)
        {
          _min = matrix[row][j];
          setcol = j;
        }
      }

      auto _max = matrix[0][setcol];
      for (int i = 0; i < k; ++i)
        if (matrix[i][setcol] > _max)
          _max = matrix[i][setcol];

      if (_max == _min)
        ans.push_back(_max);

      ++row;
    }

    return ans;
  }
};