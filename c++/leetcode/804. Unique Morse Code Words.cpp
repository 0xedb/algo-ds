class Solution
{
public:
  int uniqueMorseRepresentations(vector<string> &words)
  {
    vector<string> morse{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    unordered_set<string> seen;

    for (auto str : words)
    {
      string st = "";
      for (auto i : str)
      {
        st += morse[i - 'a'];
      }
      seen.insert(st);
    }

    return seen.size();
  }
};