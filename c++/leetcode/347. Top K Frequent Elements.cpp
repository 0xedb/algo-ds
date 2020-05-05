class Solution
{
  struct Compare
  {
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
      return a.second < b.second;
    };
  };

public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    unordered_map<int, int> seen;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> freq;

    for (auto i : nums)
      ++seen[i];

    for (auto i : seen)
    {
      freq.push(i);
    }

    vector<int> ans;

    for (int i = 0; i < k; ++i)
    {
      ans.push_back(freq.top().first);
      freq.pop();
    }

    return ans;
  }
};