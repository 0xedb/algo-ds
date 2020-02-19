/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
  let result = new Array();

  if (root) {
    let q = new Array();

    q.push(root);
    let inserts = 1;

    while (q.length > 0) {
      let temp = [];
      let max = inserts;

      for (let i = 0; i < max; i++) {
        let latest = q.shift();
        inserts--;
        temp.push(latest.val);

        if (latest.left) {
          q.push(latest.left);
          inserts++;
        }
        if (latest.right) {
          q.push(latest.right);
          inserts++;
        }
      }

      if (temp.length > 0) {
        result.push(temp);
      }
    }
  }

  return result;
};
