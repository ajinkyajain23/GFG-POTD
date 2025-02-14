class Solution {
    Node prev = null;
    Node first = null;
    Node sec = null;
    void correctBST(Node root) {
        // code here.
        inorderTraversal(root);
        if(first != null && sec != null){
            int temp = first.data;
            first.data = sec.data;
            sec.data = temp;
        }
    }
    
    void inorderTraversal(Node root){
        if(root == null){
            return;
        }
        
        inorderTraversal(root.left);
        if(prev != null && root.data < prev.data){
            if(first == null){
                first = prev;
            }
            
            sec = root;
        }
        prev = root;
        inorderTraversal(root.right);
    }
}
