class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    vector<bool> ans(candies.size());

    auto _max = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); ++i)
    {
      ans[i] = candies[i] + extraCandies >= _max ? true : false;
    }

    return ans;
  }
};
