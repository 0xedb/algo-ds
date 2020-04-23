class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    if (strs.size() == 1)
      return strs[0];

    string prefix = "";

    if (strs.size() < 1)
      return prefix;

    for (int i = 0; i < strs.size(); ++i)
    {
      if (strs[i].size() < strs[0].size())
      {
        auto temp = strs[0];
        strs[0] = strs[i];
        strs[i] = temp;
      }
    }

    for (int i = 0; i < strs[0].size(); ++i)
    {
      for (auto j = 0; j < strs.size(); ++j)
      {
        if (strs[0][i] != strs[j][i])
          return prefix;
      }

      prefix += strs[0][i];
    }

    return prefix;
  }
};