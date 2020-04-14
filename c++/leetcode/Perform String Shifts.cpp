class Solution
{
public:
  string stringShift(string s, vector<vector<int>> &shift)
  {
    for (auto i : shift)
    {

      auto amount = i[1];

      if (i[0] == 0)
      {
        while (amount--)
        {
          s.push_back(s.front());
          s.erase(s.begin());
        }
      }
      else
      {
        while (amount--)
        {
          s.insert(s.begin(), s.back());
          s.pop_back();
        }
      }
    }

    return s;
  }
};