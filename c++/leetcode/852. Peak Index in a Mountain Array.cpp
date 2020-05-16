class Solution
{
public:
  int peakIndexInMountainArray(vector<int> &A)
  {
    int ans = 0;

    for (int i = A.size() - 2; i >= 0; --i)
    {
      if (A[i] < A[i + 1])
        return ++i;
    }

    return ans;
  }
};