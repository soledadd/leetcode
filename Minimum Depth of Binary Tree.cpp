/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right != NULL) return minDepth(root->right) + 1;
        if (root->right != NULL && root->left != NULL) return minDepth(root->left) + 1;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return left > right ? right+1:left+1;
    }
    int depth(TreeNode *root) {
      if (root == NULL) return 0;
      if (root->left == NULL && root->right == NULL) return 1;
      if (root->left == NULL && root->right != NULL) return minDepth(root->right) + 1;
      if (root->right== NULL && root->left != NULL) return minDepth(root->left) + 1;
      int left = minDepth(root->left)+1;
      int right = minDepth(root->right)+1;
      return left > right ? right:left;
    }
};
