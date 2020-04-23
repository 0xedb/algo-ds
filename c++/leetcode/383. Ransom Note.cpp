class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    if (ransomNote.size() > magazine.size())
      return false;
    unordered_map<char, int> seen;

    for (auto i : magazine)
      ++seen[i];

    for (auto i : ransomNote)
    {
      if (seen[i] == 0)
        return false;
      --seen[i];
    }

    return true;
  }
};