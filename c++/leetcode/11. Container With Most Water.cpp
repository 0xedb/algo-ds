class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int _max{};

    int start = 0;
    int end = height.size() - 1;

    while (start < end)
    {
      _max = max(_max, min(height[start], height[end]) * (end - start));

      if (height[start] < height[end])
        ++start;
      else
        --end;
    }

    return _max;
  }
};