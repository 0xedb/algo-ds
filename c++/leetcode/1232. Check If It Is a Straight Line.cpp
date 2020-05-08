class Solution
{
public:
  bool checkStraightLine(vector<vector<int>> &coordinates)
  {
    if (coordinates.size() == 2)
      return true;
    int y0 = coordinates[0][1];
    int y1 = coordinates[1][1];

    int x0 = coordinates[0][0];
    int x1 = coordinates[1][0];

    for (int i = 2; i < coordinates.size(); ++i)
    {
      auto point = coordinates[i];
      if ((x1 - x0) * (point[1] - y1) != (point[0] - x1) * (y1 - y0))
        return false;
    }

    return true;
  }
};
