class Solution
{
public:
  int distributeCandies(vector<int> &candies)
  {
    unordered_set<int> seen{candies.begin(), candies.end()};

    return min(seen.size(), candies.size() / 2);
  }
};