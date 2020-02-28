class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int max = nums[0];
    set<int> st;
    int pos = 0;

    while (pos != nums.size())
    {
      if (nums[pos] > max)
        max = nums[pos];
      st.insert(nums[pos]);
      pos++;
    }

    for (int i = 0; i <= max; i++)
    {
      if (!st.count(i))
      {
        return i;
      }
    }

    return max + 1;
  }
};