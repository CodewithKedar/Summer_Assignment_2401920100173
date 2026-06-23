class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;

        return 1 + max(height(root->left), height(root->right));
    }

    void Levelorder(TreeNode* root, int level, vector<int>& temp){
        if(root == NULL) return;

        if(level == 1){
            temp.push_back(root->val);
            return;
        }

        Levelorder(root->left, level - 1, temp);
        Levelorder(root->right, level - 1, temp);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        int h = height(root);

        for(int i = 1; i <= h; i++){
            vector<int> temp;

            Levelorder(root, i, temp);

            if(i % 2 == 0){
                reverse(temp.begin(), temp.end());
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
