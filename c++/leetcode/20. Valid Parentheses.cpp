class Solution
{
public:
  bool isValid(string s)
  {
    if (s.length() % 2 != 0)
      return false;

    unordered_map<char, char> parenthesis = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}};

    stack<char> seen;

    for (auto i : s)
    {
      if (parenthesis.find(i) != parenthesis.end())
        seen.push(i);
      else
      {
        if (seen.empty() || i != parenthesis[seen.top()])
          return false;
        seen.pop();
      }
    }

    return seen.empty();
  }
};