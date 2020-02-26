class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int anchor = 0;
    int explorer = 0;

    while (explorer < nums.size())
    {

      if (nums.at(explorer) != 0)
      {
        if (anchor != explorer)
        {
          int temp = nums.at(anchor);
          nums[anchor] = nums.at(explorer);
          nums[explorer] = temp;
        }
        anchor++;
      }

      explorer++;
    }
  }
};