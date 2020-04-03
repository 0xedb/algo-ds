class Solution
{
public:
  int findLucky(vector<int> &arr)
  {
    map<int, int> seen;
    set<int> nums(arr.begin(), arr.end());

    for (auto i : arr)
    {
      if (seen.find(i) != seen.end())
        seen[i] += 1;
      else
        seen[i] = 1;
    }

    vector<int> lucky;
    for (auto key : nums)
    {
      if (seen[key] == key)
        lucky.push_back(key);
    }

    return !lucky.size() ? -1 : *std::max_element(lucky.begin(), lucky.end());
  }
};