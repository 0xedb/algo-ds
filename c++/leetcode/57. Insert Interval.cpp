class Solution
{
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
  {
    vector<vector<int>> ans;

    if (!intervals.size())
      return vector<vector<int>>{newInterval};

    int start = 0;
    const int sz = intervals.size();

    while (start < sz && intervals[start][1] < newInterval[0])
    {
      ans.push_back(intervals[start]);
      ++start;
    }

    while (start < sz && intervals[start][0] <= newInterval[1])
    {
      newInterval[0] = min(newInterval[0], intervals[start][0]);
      newInterval[1] = max(newInterval[1], intervals[start][1]);
      ++start;
    }

    ans.push_back(newInterval);

    while (start < sz)
    {
      ans.push_back(intervals[start]);
      ++start;
    }

    return ans;
  }
};