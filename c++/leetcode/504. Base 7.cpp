class Solution
{
public:
  string convertToBase7(int num)
  {
    if (num == 0)
      return "0";

    vector<int> digits;
    const int base = 7;
    string ans = "";

    ans += num < 0 ? num *= -1, "-" : "";

    cout << num;

    while (num)
    {
      digits.push_back(num % base);
      num /= base;
    }

    for (auto i = digits.rbegin(); i != digits.rend(); ++i)
      ans += to_string(*i);

    return ans;
  }
};