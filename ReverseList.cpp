Node* reverseList(struct Node* head) {
        // code here
        Node* curr = head;
        Node* prev = nullptr;
        while(curr != nullptr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
