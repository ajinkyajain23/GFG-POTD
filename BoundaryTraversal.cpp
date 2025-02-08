void printLeftBdry(Node* node, vector<int>& res) {
        if (node == NULL) {
            return;
        }
        if (node->left != NULL) {
            res.push_back(node->data);
            printLeftBdry(node->left, res);
        } else if (node->right != NULL) {
            res.push_back(node->data);
            printLeftBdry(node->right, res);
        }
    }
    
    void printLeafBdry(Node* node, vector<int>& res) {
        if (node == NULL) {
            return;
        }
        if (node->left == NULL && node->right == NULL) {
            res.push_back(node->data);
        }
        printLeafBdry(node->left, res);
        printLeafBdry(node->right, res);
    }
    
    void printRightBdry(Node* node, vector<int>& res) {
        if (node == NULL) {
            return;
        }
        if (node->right != NULL) {
            printRightBdry(node->right, res);
            res.push_back(node->data);
        } else if (node->left != NULL) {
            printRightBdry(node->left, res);
            res.push_back(node->data);
        }
    }
    
    vector<int> boundaryTraversal(Node* node) {
        vector<int> res;
        if (node == NULL) return res;
        res.push_back(node->data);
        if (node->left == NULL && node->right == NULL) {
            return res;
        }
        
        printLeftBdry(node->left, res);
        printLeafBdry(node, res);
        printRightBdry(node->right, res);
        return res;
    }
