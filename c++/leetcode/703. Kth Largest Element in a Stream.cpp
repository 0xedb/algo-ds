class KthLargest
{
  int k;
  priority_queue<int, vector<int>, std::greater<int>> seen;

public:
  KthLargest(int k, vector<int> &nums) : k{k}
  {
    for (auto i : nums)
      add(i);
  }

  int add(int val)
  {
    seen.push(val);

    if (seen.size() > k)
      seen.pop();

    return seen.top();
  }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */