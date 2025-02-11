boolean isBST(Node root) {
        // code here.
        return bstUtil(root, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    
    boolean bstUtil(Node root, int min, int max){
        if(root == null){
            return true;
        }
        
        if(root.data < min || root.data > max){
            return false;
        }
        
        
        boolean l = bstUtil(root.left, min, root.data);
        boolean r = bstUtil(root.right, root.data, max);
        return l && r;
    }
