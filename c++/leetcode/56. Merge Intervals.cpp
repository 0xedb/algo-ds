class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals)
  {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
      return a[0] < b[0];
    });

    for (auto i : intervals)
    {
      if (ans.empty() || ans[ans.size() - 1][1] < i[0])
        ans.push_back(i);
      else
        ans[ans.size() - 1][1] = max(ans[ans.size() - 1][1], i[1]);
    }

    return ans;
  }
};