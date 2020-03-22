class Solution
{
public:
  bool uniqueOccurrences(vector<int> &arr)
  {
    if (arr.size() == 1)
      return true;
    map<int, int> mp;
    map<int, int> mp1;

    for (auto i : arr)
    {
      if (mp.count(i))
      {
        mp[i] = mp[i] + 1;
      }
      else
        mp[i] = 1;
    }

    for (auto i : arr)
    {
      mp1[mp[i]] = 0;
    }

    return mp1.size() == mp.size();
  }
};

// for _, val := range arr {
//         v, ok := mp[val]
//         if ok {
//             mp1[v] = 0
//         }
//     }
