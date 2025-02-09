int maxSumUtils(Node* node, int& res) {
        if (node == nullptr) {
            return 0;
        }
        
        int l = maxSumUtils(node->left, res);
        int r = maxSumUtils(node->right, res);
        int temp = std::max(std::max(l, r) + node->data, node->data);
        int ans = std::max(temp, l + r + node->data);
        res = std::max(ans, res);
        
        return temp;
    }
    
    int findMaxSum(Node* node) {
        int res = INT_MIN;
        maxSumUtils(node, res);
        return res;
    }
