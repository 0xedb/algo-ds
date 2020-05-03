class Solution
{
public:
  string destCity(vector<vector<string>> &paths)
  {
    unordered_set<string> seen;

    for (auto i : paths)
    {
      seen.insert(i[0]);
    }

    for (auto i : paths)
    {
      if (seen.find(i[1]) == seen.end())
        return i[1];
    }

    return "";
  }
};