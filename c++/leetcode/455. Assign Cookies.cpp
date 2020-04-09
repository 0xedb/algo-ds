class Solution
{
public:
  int findContentChildren(vector<int> &g, vector<int> &s)
  {

    int max = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = s.size() - 1;
    int j = g.size() - 1;

    while (i >= 0 && j >= 0)
    {
      if (s[i] >= g[j])
      {
        max++;
        i--;
        j--;
      }
      else
        j--;
    }

    return max;
  }
};