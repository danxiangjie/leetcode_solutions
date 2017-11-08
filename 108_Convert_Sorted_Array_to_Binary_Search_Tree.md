Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

将排好序的数组转化为高度平衡的二叉搜索树。

二叉搜索树是左子树小于右子树的树。平衡的话可以使用二分搜索达到。

采用二分搜索的思路，一直取中间的数作为根结点，然后左右重复以上操作。

#### Python

```python
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        def insertNode(left, right):
            if left > right:
                return None
            mid = (left + right) / 2
            root = TreeNode(nums[mid])
            root.left = insertNode(left, mid - 1)
            root.right = insertNode(mid + 1, right)
            return root

        return insertNode(0, len(nums) - 1)
```
