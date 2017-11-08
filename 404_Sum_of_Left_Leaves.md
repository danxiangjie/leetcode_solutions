Find the sum of all left leaves in a given binary tree.

Example:

```
    3
   / \
  9  20
    /  \
   15   7
```

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.

#### C++

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL) return 0;
        int sum = 0;
        if (root->left != NULL) {
            if (root->left->left == NULL && root->left->right == NULL) {
                sum += root->left->val;
                cout << root->left->val << endl;
            }
            else
                sum += sumOfLeftLeaves(root->left);
        }

        sum += sumOfLeftLeaves(root->right);
        return sum;

    }
};
```
