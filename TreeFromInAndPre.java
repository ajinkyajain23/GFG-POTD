    public static Node buildTree(int inorder[], int preorder[]) {
        // code here
        int inStart = 0;
        int inEnd = inorder.length - 1;
        int[] preIdx = new int[1];
        preIdx[0] = 0;
        Map<Integer, Integer> inMap = new HashMap<>();
        for(int i = 0; i < inorder.length; ++i){
            inMap.put(inorder[i], i);
        }
        
        return util(inMap, preorder, inStart, inEnd, preIdx);
    }
    
    static Node util(Map<Integer, Integer> inMap, int[] preorder, int inStart, int inEnd, int[] preIdx){
        if(inStart > inEnd || preIdx[0] >= preorder.length){
            return null;
        }
        
        int rootValue = preorder[preIdx[0]];
        int rootIdx = inMap.get(rootValue);
        Node root = new Node(rootValue);
        preIdx[0]++;
        root.left = util(inMap, preorder, inStart, rootIdx - 1, preIdx);
        root.right = util(inMap, preorder, rootIdx + 1, inEnd, preIdx);
        return root;
    }
