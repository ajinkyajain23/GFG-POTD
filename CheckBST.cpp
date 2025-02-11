    bool bstUtils(Node* root, int min, int max) {
        if (root == nullptr) {
            return true;
        }
        
        if (root->data < min || root->data > max) {
            return false;
        }
        
        bool lSts = bstUtils(root->left, min, root->data);
        bool rSts = bstUtils(root->right, root->data, max);
        
        return lSts && rSts;
    }
    
    bool isBST(Node* root) {
        return bstUtils(root, INT_MIN, INT_MAX);
    }
