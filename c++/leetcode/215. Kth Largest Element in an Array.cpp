class Solution
{
public:
  int findKthLargest(vector<int> &nums, int k)
  {
    priority_queue<int, vector<int>, std::greater<int>> seen;

    for (auto i : nums)
    {
      seen.push(i);
      if (seen.size() > k)
        seen.pop();
    }

    return seen.top();
  }
};