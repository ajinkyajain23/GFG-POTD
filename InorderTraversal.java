ArrayList<Integer> inOrder(Node root) {
        // Code
        ArrayList<Integer> res = new ArrayList<Integer>();
        inorderUtils(root, res);
        return res;
    }
    
    void inorderUtils(Node root, ArrayList<Integer> res){
        if(root == null){
            return;
        }
        
        inorderUtils(root.left, res);
        res.add(root.data);
        inorderUtils(root.right, res);
    }
