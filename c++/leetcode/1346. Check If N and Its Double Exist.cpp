class Solution
{
public:
  bool checkIfExist(vector<int> &arr)
  {
    unordered_map<int, int> seen;

    for (auto i : arr)
      ++seen[i];

    for (auto i : seen)
    {
      int num = i.first;
      if (seen.find(num * 2) != seen.end())
      {
        if (num * 2 == num && seen[num] < 2)
          continue;
        return true;
      }
    }

    return false;
  }
};