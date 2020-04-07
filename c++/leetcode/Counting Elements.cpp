class Solution
{
public:
  int countElements(vector<int> &arr)
  {
    int count = 0;
    if (arr.size() == 1)
      return count;

    set<int> seen{arr.begin(), arr.end()};

    for (auto el : arr)
    {
      if (seen.find(el + 1) != seen.end())
        count++;
    }

    return count;
  }
};