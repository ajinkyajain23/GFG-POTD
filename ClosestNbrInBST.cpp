class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        Node* curr = root;
        int ans = -1;
        while (curr != nullptr) {
            if (curr->key <= n) {
                ans = curr->key;
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
        return ans;
    }
};
