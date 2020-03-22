# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        self.kth = k
        self.res = 0

        self.inorder(root)
        return self.res

    def inorder(self, root):
        if root is None or self.kth == 0:
            return

        self.inorder(root.left)
        self.kth -= 1
        if self.kth == 0:
            self.res = root.val
        else:
            self.inorder(root.right)
