class Solution
{
public:
  int countCharacters(vector<string> &words, string chars)
  {
    int len{};
    unordered_map<char, int> seen;

    for (auto i : chars)
      ++seen[i];

    for (auto i : words)
    {
      auto sn = seen;

      int k = 0;
      for (; k < i.size(); ++k)
      {
        --sn[i[k]];
        if (sn[i[k]] < 0)
          break;
      }

      if (k == i.size())
        len += i.size();
    }

    return len;
  }
};