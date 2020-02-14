# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        array = []
        
        if root is None:
            return array
        stack = []
        stack.append(root) 
        
        while len(stack) > 0:
            top = stack.pop()
            array.append(top.val)
            
            if top.right:
                stack.append(top.right)
            if top.left:
                stack.append(top.left)
        
        return array
        