class Solution
{
public:
  string removeDuplicates(string S)
  {
    vector<char> seen;
    seen.push_back(S[0]);

    for (int i = 1; i < S.size(); ++i)
    {
      if (!seen.empty() && seen.back() == S[i])
        seen.pop_back();
      else
        seen.push_back(S[i]);
    }

    return string(seen.begin(), seen.end());
  }
};