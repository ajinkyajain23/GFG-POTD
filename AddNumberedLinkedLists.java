static Node rev(Node head){
        
        Node curr = head;
        Node prev = null;
        while(curr != null){
            Node next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
        
    }
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        Node first = rev(num1);
        Node sec = rev(num2);
        Node dummy = new Node(-1);
        Node temp = dummy;
        int carry = 0;
        
        while(first != null || sec != null || carry == 1){
            int data1 = first != null ? first.data : 0;
            int data2 = sec != null ? sec.data : 0;
            int sum = data1 + data2 + carry;
            temp.next = new Node(sum % 10);
            carry = sum / 10;
            if(first != null){
            first = first.next;
            }
            if(sec != null){
                sec = sec.next;
            }
            temp = temp.next;
        }
        
        Node ans = rev(dummy.next);
        while(ans != null && ans.data == 0){
            ans = ans.next;
        }
        
        return ans;
    }
