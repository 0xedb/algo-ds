# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class BSTIterator:
    def __init__(self, root: TreeNode):
        self.sorted = []
        self.pos = 0
        self.inorder(root)

    def next(self) -> int:
        """
        @return the next smallest number
        """
        val = self.sorted[self.pos]
        self.pos += 1
        return val

    def hasNext(self) -> bool:
        """
        @return whether we have a next smallest number
        """
        return self.pos < len(self.sorted)

    def inorder(self, root):
        if root is None:
            return

        self.inorder(root.left)
        self.sorted.append(root.val)
        self.inorder(root.right)


# Your BSTIterator object will be instantiated and called as such:
# obj = BSTIterator(root)
# param_1 = obj.next()
# param_2 = obj.hasNext()