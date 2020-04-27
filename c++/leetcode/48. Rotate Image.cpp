class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    const int sz = matrix.size();

    // transpose
    for (int i = 0; i < sz; ++i)
    {
      for (int j = i; j < sz; ++j)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }

    // flip
    for (int i = 0; i < sz; ++i)
    {
      for (int j = 0; j < (sz / 2); ++j)
      {
        swap(matrix[i][j], matrix[i][sz - 1 - j]);
      }
    }
  }
};