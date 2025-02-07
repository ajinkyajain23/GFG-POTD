vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> res;
        inorderUtils(root, res);
        return res;
    }
    
    void inorderUtils(Node* root, vector<int>& res){
        if(root == nullptr){
            return;
        }
        
        inorderUtils(root->left, res);
        res.push_back(root->data);
        inorderUtils(root->right, res);
    }
