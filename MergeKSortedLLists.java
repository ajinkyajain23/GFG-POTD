Node mergeKLists(List<Node> arr) {
        // Add your code here.
        PriorityQueue<Node> pq = new PriorityQueue<>((a,b) -> a.data - b.data);
        for(Node head : arr){
            pq.add(head);
        }
        
        Node dummy = new Node(-1);
        Node curr = dummy;
        
        while(!pq.isEmpty()){
            Node minNode = pq.poll();
            if(minNode.next != null){
                pq.add(minNode.next);
            }
            
            curr.next = minNode;
            curr = curr.next;
        }
        
        
        return dummy.next;
    }
