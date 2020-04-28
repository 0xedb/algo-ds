class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    int i = m - 1;
    int j = n - 1;

    auto it = nums1.rbegin();

    while (j >= 0 && i >= 0)
    {
      if (nums1[i] > nums2[j])
        *it = nums1[i--];
      else
        *it = nums2[j--];

      ++it;
    }

    while (j >= 0)
    {
      *it = nums2[j--];
      ++it;
    }
  }
};