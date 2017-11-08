Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

二叉树最大深度

递归：

```python
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
```

迭代，层序遍历：

```python
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        if not root:
            return 0
        tstack, h = [root], 0
        while tstack:
            nextlevel = []
            while tstack:
                top = tstack.pop()
                if top.left:
                    nextlevel.append(top.left)
                if top.right:
                    nextlevel.append(top.right)
            h = h+1
            tstack = nextlevel
        return h
```
