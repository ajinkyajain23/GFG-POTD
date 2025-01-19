public Node rotate(Node head, int k) {
        // add code here
        int len = 1;
        Node curr = head;
        while(curr.next != null){
            curr = curr.next;
            ++len;
        }
        
        k = k % len;
        
        if(k == 0){
            return head;
        }
        
        curr.next = head;
        curr = curr.next;
        
        int kthNode  =1;
        while(kthNode < k){
            curr = curr.next;
            ++kthNode;
        }
        
        head = curr.next;
        curr.next = null;
        
        return head;
    }
