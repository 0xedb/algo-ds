class Solution
{
public:
  vector<int> findAnagrams(string s, string p)
  {
    vector<int> ans;

    const int sz = s.size();
    const int pz = p.size();

    if (sz < pz)
      return ans;

    unordered_map<char, int> sn;
    unordered_map<char, int> pn;

    for (int i = 0; i < pz; ++i)
    {
      pn[p[i]]++;
      sn[s[i]]++;
    }

    if (pn == sn)
      ans.push_back(0);

    for (int i = pz; i < sz; ++i)
    {
      --sn[s[i - pz]];

      if (!sn[s[i - pz]])
        sn.erase(s[i - pz]);

      ++sn[s[i]];

      if (pn == sn)
        ans.push_back((i - pz) + 1);
    }

    return ans;
  }
};