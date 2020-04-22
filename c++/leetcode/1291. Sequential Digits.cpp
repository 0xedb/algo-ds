class Solution
{
public:
  void btrack(vector<int> &, int, int, int, int);
  vector<int> sequentialDigits(int low, int high)
  {
    vector<int> ans;

    for (int i = 1; i <= 9; ++i)
    {
      btrack(ans, low, high, 0, i);
    }

    sort(ans.begin(), ans.end());
    return ans;
  }
};

void Solution::btrack(vector<int> &ans, int l, int h, int sol, int n)
{
  if (sol > h)
    return;
  if (sol >= l)
    ans.push_back(sol);
  if (n > 9)
    return;
  btrack(ans, l, h, sol * 10 + n, n + 1);
}
