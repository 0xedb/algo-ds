class Solution
{
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> seen;
    stack<int> stk;

    for (auto i : nums2)
    {
      while (stk.size() && stk.top() < i)
      {
        seen[stk.top()] = i;
        stk.pop();
      }

      stk.push(i);
    }

    for (int i = 0; i < nums1.size(); ++i)
      nums1[i] = seen.count(nums1[i]) ? seen[nums1[i]] : -1;

    return nums1;
  }
};
