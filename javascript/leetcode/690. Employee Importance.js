/**
 * Definition for Employee.
 * function Employee(id, importance, subordinates) {
 *     this.id = id;
 *     this.importance = importance;
 *     this.subordinates = subordinates;
 * }
 */

/**
 * @param {Employee[]} employees
 * @param {number} id
 * @return {number}
 */
var GetImportance = function (employees, id) {
  const seen = new Map();

  const dfs = (id) => {
    const emp = seen.get(id);

    let ans = emp.importance;

    for (let i of emp.subordinates) ans += dfs(i);

    return ans;
  };

  for (let i of employees) seen.set(i.id, i);

  return dfs(id);
};
