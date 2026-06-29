class Solution {
public:
    unordered_map<int,int> mp;
    int index = 0;

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end) {

        if(start > end){
            return NULL;
        }

        int value = preorder[index++];
        TreeNode* root = new TreeNode(value);

        int position = mp[value];

        root->left = solve(preorder, inorder, start, position - 1);
        root->right = solve(preorder, inorder, position + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }

        return solve(preorder, inorder, 0, inorder.size() - 1);
    }
};
