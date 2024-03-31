class Solution {
    public static int findMaxForN(Node root, int n) {
        // Add your code here.
        Node curr = root;
        int ans = -1;
        while(curr != null){
            if(curr.key <= n){
                ans = curr.key;
                curr = curr.right;
            }
            else{
                curr = curr.left;
            }
        }
        return ans;
        
    }
}
