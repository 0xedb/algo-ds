class Solution
{
public:
  int oddCells(int n, int m, vector<vector<int>> &indices)
  {
    int odds = 0;

    vector<bool> rows(n, false);
    vector<bool> cols(m, false);

    for (auto i : indices)
    {
      rows[i[0]] = !rows[i[0]];
      cols[i[1]] = !cols[i[1]];
    }

    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        if (rows[i] ^ cols[j])
          ++odds;
      }
    }

    return odds;
  }
};