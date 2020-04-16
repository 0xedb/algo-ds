class Solution
{
public:
  vector<int> replaceElements(vector<int> &arr)
  {
    const int sz = arr.size() - 1;

    int mx = arr[sz];

    for (int i = sz - 1; i >= 0; --i)
    {
      auto val = arr.at(i);
      arr[i] = mx;
      mx = max(val, mx);
    }
    arr[sz] = -1;

    return arr;
  }
};