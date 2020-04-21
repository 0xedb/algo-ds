class Solution
{
public:
  bool buddyStrings(string A, string B)
  {
    if (A.size() != B.size())
      return false;

    if (A == B)
    {
      unordered_set<char> seen;
      for (auto i : A)
        seen.insert(i);

      if (seen.size() < A.size())
        return true;
      return false;
    }

    vector<int> diff;
    for (int i = 0; i < A.size(); ++i)
    {
      if (A[i] != B[i])
      {
        diff.push_back(i);
        if (diff.size() > 2)
          break;
      }
    }

    if (diff.size() == 2 && A[diff[0]] == B[diff[1]] &&
        B[diff[0]] == A[diff[1]])
      return true;

    return false;
  }
};