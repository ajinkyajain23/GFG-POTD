int height(Node node) {
        // code here
        if(node == null){
            return -1;
        }
        
        int lHt = height(node.left);
        int rHt = height(node.right);
        return Math.max(lHt, rHt) + 1;
    }
