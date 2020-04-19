class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {

    const auto reverse = [](vector<int> &nums, int start, int end) {
      while (start < end)
      {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        ++start;
        --end;
      }
    };

    const int sz = nums.size();

    k %= sz;
    reverse(nums, 0, sz - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, sz - 1);
  }
};