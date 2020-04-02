class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int max = 0;
    int right = 0;
    int left = 0;

    set<char> seen;

    while (right < s.length())
    {
      auto pos = seen.find(s[right]);
      if (pos != seen.end())
      {
        // remove val from set
        // increase left
        seen.erase(s[left]);
        left++;
      }
      else
      {
        seen.insert(s[right]);
        max = seen.size() > max ? seen.size() : max;
        right++;
      }
    }

    return max;
  }
};