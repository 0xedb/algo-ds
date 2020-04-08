class Solution
{
public:
  vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
  {
    vector<int> result;
    int count = 0;

    for (auto i : index)
    {
      auto pos = result.begin();
      result.insert(pos + i, nums[count++]);
    }

    return result;
  }
};