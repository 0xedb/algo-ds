class Solution
{
public:
  vector<string> commonChars(vector<string> &A)
  {
    vector<string> result;
    const int sz = A.size();
    unordered_map<char, vector<int>> seen;
    int pos = 0;

    for (auto i : A)
    {
      for (auto j : i)
      {
        if (seen.find(j) != seen.end())
        {
          seen[j][pos] += 1;
          continue;
        }
        seen[j] = vector<int>(sz, 0);
        seen[j][pos] = 1;
      }
      ++pos;
    }

    // get common
    for (auto it = seen.begin(); it != seen.end(); ++it)
    {

      if (all_of(it->second.begin(), it->second.end(), [](int v) { return v > 0; }))
      {
        int min = *(min_element(it->second.begin(), it->second.end()));
        for (; min > 0; --min)
          result.push_back(string(1, it->first));
      }
    }

    return result;
  }
};