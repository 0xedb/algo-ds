/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution
{
  unordered_map<int, Employee *> seen;

public:
  int dfs(int);
  int getImportance(vector<Employee *> employees, int id)
  {
    for (auto i : employees)
      seen.insert({i->id, i});

    return dfs(id);
  }
};

int Solution::dfs(int id)
{
  auto emp = seen[id];

  auto ans = emp->importance;

  for (auto i : emp->subordinates)
    ans += dfs(i);

  return ans;
}