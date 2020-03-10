class Solution
{
public:
  bool isPalindrome(string s)
  {
    if (s == "")
      return true;

    int start = 0;
    int end = s.length();

    while (start < end)
    {
      if (isalnum(s[start]) && isalnum(s[end]))
      {
        if (tolower(s[start]) == tolower(s[end]))
        {
          start++;
          end--;
        }
        else
          return false;
      }

      if (!isalnum(s[start]))
        start++;
      if (!isalnum(s[end]))
        end--;
    }

    return true;
  }
};