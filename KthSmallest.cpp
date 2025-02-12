class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node* root, int k) {
        count = k;
        result = -1; // Reset result for each call
        inOrderTraversal(root);
        return result;
    }

private:
    int count;
    int result;

    void inOrderTraversal(Node* node) {
        if (node == nullptr) {
            return;
        }
        inOrderTraversal(node->left);
        count--;
        if (count == 0) {
            result = node->data;
            return;
        }
        inOrderTraversal(node->right);
    }
};
