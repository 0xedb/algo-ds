class Solution
{
  vector<int> original;
  vector<int> &nums;

public:
  Solution(vector<int> &nums) : nums{nums}
  {
    original = nums;
    srand(time(nullptr));
  }

  /** Resets the array to its original configuration and return it. */
  vector<int> reset()
  {
    nums = original;
    return nums;
  }

  /** Returns a random shuffling of the array. */
  vector<int> shuffle()
  {
    for (int i = 0; i < nums.size(); i++)
    {
      int rnd = rand() % nums.size();
      int temp = nums[i];
      nums[i] = nums[rnd];
      nums[rnd] = temp;
    }
    return nums;
  }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
