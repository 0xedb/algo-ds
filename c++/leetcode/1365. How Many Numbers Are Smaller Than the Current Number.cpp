class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    // duplicate the num array
    // sort it
    // find the counts than each item in sorted
    // save item and counts in map
    // iterate over original array and set value to counts using map
    vector<int> dupe = nums;
    sort(dupe.begin(), dupe.end());

    unordered_map<int, int> seen;

    int last = dupe[0];
    seen.insert({last, 0});
    dupe[0] = 0;

    for (int i = 1; i < dupe.size(); ++i)
    {
      if (dupe[i] == last)
        dupe[i] = dupe[i - 1];
      else
      {
        last = dupe[i];
        dupe[i] = i;
        seen[last] = i;
      }
    }

    for (int i = 0; i < nums.size(); ++i)
    {
      nums[i] = seen[nums[i]];
    }

    return nums;
  }
};