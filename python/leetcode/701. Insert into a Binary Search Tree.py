# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        cur = root

        while cur:
            if val > cur.val:
                #right
                if cur.right is None:
                    cur.right = TreeNode(val)
                    return root
                cur = cur.right

            if val < cur.val:
                #left
                if cur.left is None:
                    cur.left = TreeNode(val)
                    return root
                cur = cur.left
        return root
