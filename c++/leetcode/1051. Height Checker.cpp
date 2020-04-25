class Solution
{
public:
  int heightChecker(vector<int> &heights)
  {
    auto dupe = heights;
    sort(dupe.begin(), dupe.end());

    int ans = 0;

    for (int i = 0; i < heights.size(); ++i)
    {
      if (dupe[i] != heights[i])
        ++ans;
    }

    return ans;
  }
};