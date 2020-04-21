class Solution
{
public:
  int maximum69Number(int num)
  {
    vector<int> to_add;

    int ans = 0;
    bool found = false;

    int factor = 10;

    while (num >= 6)
    {
      int rem = num % factor;
      to_add.push_back(rem);

      num = (num / factor) * factor;
      factor *= 10;
    }

    for (int i = to_add.size() - 1; i >= 0; --i)
    {
      auto num = to_add.at(i);
      if (!found && num == 6 * pow(10, i))
      {
        num = (num / 6) * 9;
        found = true;
      }

      ans += num;
    }

    return ans;
  }
};