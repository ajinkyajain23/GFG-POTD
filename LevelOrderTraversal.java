public ArrayList<ArrayList<Integer>> levelOrder(Node root) {
        // Your code here
        
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        while(!q.isEmpty()){
            int sz = q.size();
            ArrayList<Integer> levelElements = new ArrayList<>();
            for(int i = 0; i < sz; ++i){
                Node curr = q.poll();
                levelElements.add(curr.data);
                if(curr.left != null){
                    q.add(curr.left);
                }
                
                if(curr.right != null){
                    q.add(curr.right);
                }
            }
            res.add(levelElements);
            
        }
        return res;
    }
