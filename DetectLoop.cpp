bool detectLoop(Node* head) {
        // your code here
        Node* fast = head;
        Node* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast  == slow){
                return true;
            }
        }
        return false;
    }
