class Solution
{
public:
  bool wordPattern(string pattern, string str)
  {
    vector<string> words;
    string tmp = "";
    for (auto i : str)
    {
      if (i == ' ')
      {
        words.push_back(tmp);
        tmp = "";
      }
      else
        tmp += i;
    }

    words.push_back(tmp);

    if (pattern.size() != words.size())
      return false;

    int i = 0;
    unordered_map<char, string> seen;
    unordered_set<string> dupe;

    for (auto j : pattern)
    {
      auto it = seen.find(j);

      if (it != seen.end())
      {
        if (it->second != words[i])
          return false;
      }
      else
      {
        if (dupe.count(words[i]))
          return false;

        seen.insert({j, words[i]});
        dupe.insert(words[i]);
      }

      ++i;
    }

    return true;
  }
};