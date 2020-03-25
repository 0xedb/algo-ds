# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def deleteNode(self, root: TreeNode, key: int) -> TreeNode:
        if root is None:
            return None

        if key > root.val:
            root.right = self.deleteNode(root.right, key)
        elif key < root.val:
            root.left = self.deleteNode(root.left, key)
        else:
            if root.left is None and root.right is None:
                root = None
            elif root.left is not None and root.right is not None:
                min = self.small(root.right)
                root.val = min.val
                root.right = self.deleteNode(root.right, root.val)
            else:
                if root.right is None:
                    root = root.left
                else:
                    root = root.right
        return root

    def small(self, root):
        while root.left is not None:
            root = root.left
        return root