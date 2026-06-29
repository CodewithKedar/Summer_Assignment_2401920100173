class Codec {
public:

    string serialize(TreeNode* root) {
        if(root == NULL){
            return "";
        }

        queue<TreeNode*> q;
        q.push(root);

        string ans = "";

        while(!q.empty()){

            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                ans += "N ";
            }
            else{
                ans += to_string(front->val) + " ";
                q.push(front->left);
                q.push(front->right);
            }
        }

        return ans;
    }

    TreeNode* deserialize(string data) {
        if(data == ""){
            return NULL;
        }

        stringstream ss(data);

        string value;
        ss >> value;

        TreeNode* root = new TreeNode(stoi(value));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            TreeNode* front = q.front();
            q.pop();

            ss >> value;
            if(value != "N"){
                front->left = new TreeNode(stoi(value));
                q.push(front->left);
            }

            ss >> value;
            if(value != "N"){
                front->right = new TreeNode(stoi(value));
                q.push(front->right);
            }
        }

        return root;
    }
};
