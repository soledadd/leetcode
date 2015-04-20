class Solution {
public:
 bool isSymmetric(TreeNode *root) {
        if (root == NULL) return true;
        return compare(root,root);
    }
    bool compare(TreeNode *a,TreeNode *b) {
    	if (a->right != NULL && b->left == NULL || a->right == NULL && b->left != NULL) return false;
    	if (a->left != NULL && b->right == NULL || a->left == NULL && b->right != NULL) return false;
    	if (a->right != NULL && b->left != NULL && a->right->val != b->left->val) return false;
    	if (a->left != NULL && b->right != NULL && a->left->val != b->right->val) return false;
    	bool right = true;
    	if (a->right != NULL && b->left != NULL) {
    		right = compare(a->right,b->left);
    	}
    	bool left = true;
		if (a->left != NULL && b->right != NULL){
			left =  compare(a->left,b->right);
		}
		return right && left;
    }
};
