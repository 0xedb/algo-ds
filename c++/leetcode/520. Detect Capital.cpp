class Solution
{
public:
  bool detectCapitalUse(string word)
  {
    int count{};

    for (auto ch : word)
    {
      if (isupper(ch))
        ++count;
    }

    return count == word.size() || count == 0 || count == 1 && isupper(word[0]);
  }
};