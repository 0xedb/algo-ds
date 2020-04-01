# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def countNodes(self, root: TreeNode) -> int:
        return self.count(root, 0)

    def count(self, root, c):
        if root is None:
            return 0
        if root:
            c += 1
        c += self.count(root.left, 0)
        c += self.count(root.right, 0)

        return c