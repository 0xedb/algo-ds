class FirstUnique
{
  list<int> unique;
  unordered_map<int, list<int>::iterator> seen;

public:
  FirstUnique(vector<int> &nums)
  {
    for (auto i : nums)
      add(i);
  }

  int showFirstUnique()
  {
    if (unique.empty())
      return -1;

    return unique.front();
  }

  void add(int value)
  {
    auto where = seen.find(value);

    // never seen
    if (where == seen.end())
    {
      unique.push_back(value);
      seen.insert({value, --unique.end()});
    }

    // seen before
    else
    {
      if (where->second != unique.end())
      {
        unique.erase(where->second);
        where->second = unique.end();
      }
    }
  }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */