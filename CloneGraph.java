class Solution {
    Node cloneGraph(Node node) {
        // code here
        Queue<Node> q = new LinkedList<>();
        q.add(node);
        Map<Node, Node> map = new HashMap<>();
        map.put(node, new Node(node.val));
        while(!q.isEmpty()){
            Node u = q.poll();
            Node clonedU = map.get(u);
            for(Node v : u.neighbors){
                Node clonedV = map.get(v);
                if(clonedV == null){
                    clonedV = new Node(v.val);
                    q.add(v);
                    map.put(v, clonedV);
                }
                clonedU.neighbors.add(clonedV);
            }
        }
        return map.get(node);
    }
}
