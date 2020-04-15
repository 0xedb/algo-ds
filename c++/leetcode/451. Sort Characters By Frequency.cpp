class Solution
{
public:
  string frequencySort(string s)
  {
    unordered_map<char, int> characters;
    priority_queue<pair<int, char>> pq;

    string ans = "";

    for (auto i : s)
      characters[i]++;

    for (auto i : characters)
    {
      pq.push(make_pair(i.second, i.first));
    }

    while (pq.size())
    {
      auto tp = pq.top();
      pq.pop();
      int times = tp.first;
      while (times--)
        ans += tp.second;
    }

    return ans;
  }
};