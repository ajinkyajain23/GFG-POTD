struct Compare {
        bool operator()(Node* a, Node* b) {
            return a->data > b->data; // Min-heap based on data value
        }
    };

    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<Node*, vector<Node*>, Compare> pq;
    
        // Add all the nodes to the priority queue
        for (Node* head : arr) {
            pq.push(head);
        }
    
        // Dummy node to help with list manipulation
        Node* dummy = new Node(-1);
        Node* curr = dummy;
    
        // Merge the lists
        while (!pq.empty()) {
            Node* minNode = pq.top();
            pq.pop();
            
            curr->next = minNode;
            curr = curr->next;
            
            // If there's a next node, add it to the priority queue
            if (minNode->next != nullptr) {
                pq.push(minNode->next);
            }
        }
    
        return dummy->next;  // Return the merged list (skip dummy node)
    }
