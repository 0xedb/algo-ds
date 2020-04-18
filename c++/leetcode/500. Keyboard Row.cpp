class Solution
{
public:
  vector<string> findWords(vector<string> &words)
  {
    unordered_set<char> first_row = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> second_row = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> third_row = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    auto i = words.begin();

    while (i < words.end())
    {
      auto which = first_row;
      auto first_character = tolower((*i)[0]);

      if (second_row.find(first_character) != second_row.end())
        which = second_row;
      else if (third_row.find(first_character) != third_row.end())
        which = third_row;

      for (auto j : *i)
      {
        j = tolower(j);

        if (which.find(j) == which.end())
        {
          i = words.erase(i) - 1;
          break;
        }
      }

      ++i;
    }

    return words;
  }
};