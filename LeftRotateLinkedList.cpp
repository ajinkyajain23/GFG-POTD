Node* rotate(Node* head, int k) {
        // Your code here
          if (!head || k <= 0) {
                return head;
            }
        
            // Calculate the length of the linked list
            int len = 1;
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
                ++len;
            }
        
            // Reduce k to within the bounds of the list length
            k = k % len;
            if (k == 0) {
                return head;
            }
        
            // Connect the last node to the head to form a circular linked list
            curr->next = head;
        
            // Find the k-th node
            curr = head;
            int kthNode = 1;
            while (kthNode < k) {
                curr = curr->next;
                kthNode++;
            }
        
            // Update head and break the circular linked list
            head = curr->next;
            curr->next = nullptr;
        
            return head;
    }
