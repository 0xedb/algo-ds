class Solution
{
public:
  int findJudge(int N, vector<vector<int>> &trust)
  {
    int judge = -1;

    unordered_set<int> people(N);
    vector<unordered_set<int>> know(N);

    // who doesn't trust anyone?
    for (auto i : trust)
    {
      people.insert(i[0]);
      know[i[0] - 1].insert(i[1]);
    }

    for (int i = 1; i <= N; ++i)
    {
      if (people.find(i) == people.end())
      {
        judge = i;
        break;
      }
    }

    // who does everyone trust?
    for (int i = 1; i <= N; ++i)
    {
      if (i == judge)
        continue;
      auto knows = know[i - 1];
      if (knows.find(judge) == knows.end())
        return -1;
    }

    return judge;
  }
};