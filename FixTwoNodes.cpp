class Solution {
  public:
    Node* prev = nullptr;
    Node* first = nullptr;
    Node* second = nullptr;

    void correctBST(Node* root) {
        inorderTraverse(root);
        if (first && second) {
            swap(first->data, second->data);
        }
    }

private:
    void inorderTraverse(Node* root) {
        if (!root) return;

        inorderTraverse(root->left);

        if (prev && root->data < prev->data) {
            if (!first) {
                first = prev;
            }
            second = root;
        }
        prev = root;

        inorderTraverse(root->right);
    }
};
