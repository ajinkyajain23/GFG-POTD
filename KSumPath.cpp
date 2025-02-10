int output = 0;
  public:
    int sumK(Node *root, int k) {
        // code here
        vector<int> paths;
        utils(root, k, paths);
        return output;
    }
    
    void utils(Node* root, int k, vector<int>& paths) {
        if (root == nullptr) {
            return;
        }
        paths.push_back(root->data);
        int sum = 0;
        for (int i = paths.size() - 1; i >= 0; --i) {
            sum += paths[i];
            if (sum == k) {
                ++output;
            }
        }
        utils(root->left, k, paths);
        utils(root->right, k, paths);
        paths.pop_back();
    }
