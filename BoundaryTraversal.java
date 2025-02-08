void boundaryLeftTraversal(Node node, ArrayList<Integer> res){
        if(node == null){
            return;
        }
        
        if(node.left != null){
            res.add(node.data);
            boundaryLeftTraversal(node.left, res);
        }
        else if(node.right != null){
            res.add(node.data);
            boundaryLeftTraversal(node.right, res);
        }
    }
    
    void boundaryLeafTraversal(Node node, ArrayList<Integer> res){
        if(node == null){
            return;
        }
        
        if(node.left == null && node.right == null){
            res.add(node.data);
        }
        boundaryLeafTraversal(node.left, res);
        boundaryLeafTraversal(node.right, res);
        
    }
    
    void rightTraversal(Node node, ArrayList<Integer> res){
        if(node == null){
            return;
        }
        
        if(node.right != null){
            rightTraversal(node.right, res);
            res.add(node.data);
        }
        else if(node.left != null){
            rightTraversal(node.left, res);
            res.add(node.data);
        }
    }
    
    ArrayList<Integer> boundaryTraversal(Node node) {
        // code here
        ArrayList<Integer> res = new ArrayList<>();
        res.add(node.data);
        if(node.left == null && node.right == null){
            return res;
        }
        
        boundaryLeftTraversal(node.left, res);
        boundaryLeafTraversal(node, res);
        rightTraversal(node.right, res);
        return res;
    }
