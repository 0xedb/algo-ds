class Solution
{
public:
  void duplicateZeros(vector<int> &arr)
  {
    int end = arr.size();
    int j = end + count(arr.begin(), arr.end(), 0);

    for (int i = end - 1; i >= 0; --i)
    {
      if (--j < end)
        arr[j] = arr[i];

      if (arr[i] == 0 && --j < end)
        arr[j] = 0;
    }
  }