class Solution
{
public:
  int firstUniqChar(string s)
  {
    map<char, int> mp;

    for (auto ch : s)
    {
      if (mp.count(ch))
      {
        mp[ch] = mp.at(ch) + 1;
        continue;
      }

      mp[ch] = 1;
    }

    for (int i = 0; i < s.size(); i++)
    {
      if (mp[s.at(i)] == 1)
        return i;
    }

    return -1;
  }
};