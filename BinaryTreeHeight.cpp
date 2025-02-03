int height(Node* node) {
        // code here
           if(node == nullptr){
            return -1;
        }
        
        int l = height(node->left);
        int r = height(node->right);
        return max(l, r) + 1;
    }
