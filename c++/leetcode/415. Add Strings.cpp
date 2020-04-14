class Solution
{
public:
  string addStrings(string num1, string num2)
  {
    vector<char> ans;

    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0)
    {
      int sum = 0;
      if (i >= 0 && j >= 0)
        sum = num1[i--] - '0' + num2[j--] - '0';
      else if (i >= 0)
        sum = num1[i--] - '0';
      else
        sum = num2[j--] - '0';

      sum += carry;
      carry = sum > 9 ? 1 : 0;
      ans.push_back((sum % 10) + '0');
    }

    if (carry)
      ans.push_back(carry + '0');

    return string(ans.rbegin(), ans.rend());
  }
};