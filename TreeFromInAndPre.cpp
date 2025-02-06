Node* constructTree(vector<int> &preorder, unordered_map<int, int>& inorderMap, int inStart, int inEnd, int& preIndex) {
        if (inStart > inEnd) return nullptr;
        
        int rootValue = preorder[preIndex++];
        Node* root = new Node(rootValue);
        
        int rootIndex = inorderMap[rootValue];
        
        root->left = constructTree(preorder, inorderMap, inStart, rootIndex - 1, preIndex);
        root->right = constructTree(preorder, inorderMap, rootIndex + 1, inEnd, preIndex);
        
        return root;
    }
    
    Node* buildTree(vector<int> &inorder, vector<int> &preorder) {
        unordered_map<int, int> inorderMap;
        int n = inorder.size();
        for (int i = 0; i < n; i++) {
            inorderMap[inorder[i]] = i;
        }
        int preIndex = 0;
        
        return constructTree(preorder, inorderMap, 0, n - 1, preIndex);
    }
