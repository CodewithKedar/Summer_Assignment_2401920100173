class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        else if(root->val == val) return root;
        TreeNode* leftans=searchBST(root->left,val);
        if(leftans !=NULL) return leftans;
        return searchBST(root->right,val);
    }
};
