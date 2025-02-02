vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        queue<Node*> queue;
    queue.push(root);
    vector<vector<int>> res;
    
    while (!queue.empty()) {
        int sz = queue.size();
        vector<int> temp;
        
        for (int i = 0; i < sz; ++i) {
            Node* curr = queue.front();
            queue.pop();
            temp.push_back(curr->data);
            
            if (curr->left) {
                queue.push(curr->left);
            }
            
            if (curr->right) {
                queue.push(curr->right);
            }
        }
        res.push_back(temp);
    }
    
    return res;
    }
