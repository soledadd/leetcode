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
    bool isBalanced(TreeNode *root) {
        if (root == NULL) return true;
        if (abs( maxDepth(root->left) - maxDepth(root->right) ) > 1) {
        	return false;
		}
		return isBalanced(root->left) && isBalanced(root->right);
        
    }
    int maxDepth(TreeNode *root) {
        if (root == NULL) {
        	return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root0>right);
        return left > right ? 1 + left:1 + right;
    }
};
