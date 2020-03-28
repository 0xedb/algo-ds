class Solution
{
public:
  int numTrees(int n)
  {
    vector<int> ans(n + 1, 0);
    ans[0] = 1;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        ans[i] += ans[i - j] * ans[j - 1];
      }
    }

    return ans[n];
  }
};
 