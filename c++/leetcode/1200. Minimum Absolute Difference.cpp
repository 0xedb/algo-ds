class Solution
{
public:
  vector<vector<int>> minimumAbsDifference(vector<int> &arr)
  {
    vector<vector<int>> answer;
    sort(arr.begin(), arr.end());

    int min_diff = arr[1] - arr[0];
    for (int i = arr.size() - 1; i > 0; --i)
    {
      auto diff = abs(arr[i] - arr[i - 1]);
      min_diff = min(min_diff, diff);
    }

    for (int i = 0; i < arr.size() - 1; ++i)
    {
      if (min_diff == abs(arr[i] - arr[i + 1]))
        answer.push_back(vector<int>{arr[i], arr[i + 1]});
    }

    return answer;
  }
};