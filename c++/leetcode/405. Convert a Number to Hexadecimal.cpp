class Solution
{
public:
  string toHex(int num)
  {
    const string _hex = "0123456789abcdef";

    if (!num)
      return "0";
    unsigned n = num;

    string ans{};

    while (n)
    {
      ans.push_back(_hex[n % 16]);
      n /= 16;
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }
};