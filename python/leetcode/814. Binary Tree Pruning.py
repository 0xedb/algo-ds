# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def pruneTree(self, root: TreeNode) -> TreeNode:
        if root is None:
            return None

        root.right = self.pruneTree(root.right)
        root.left = self.pruneTree(root.left)

        if root.val != 1 and root.left is None and root.right is None:
            return None
        return root
