class Solution
{
public:
  bool validMountainArray(vector<int> &A)
  {
    const int sz = A.size();
    if (sz < 3)
      return false;

    int left = 0;

    // walk to peak
    while (A[left] < A[left + 1])
    {
      ++left;
      if (left == sz - 1)
        return false;
    }

    if (left < 1)
      return false;

    // walk down peak
    while (left < sz - 1)
    {
      if (A[left] <= A[left + 1])
        return false;
      ++left;
    }

    return true;
  }
};