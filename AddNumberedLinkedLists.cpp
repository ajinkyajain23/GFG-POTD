Node* rev(Node* head) {
        Node* cur = head;
        Node* prev = nullptr;
        while (cur != nullptr) {
            Node* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }

    Node* addTwoLists(Node* num1, Node* num2) {
    Node dummy(-1);
    Node* temp = &dummy;
    Node* first = rev(num1);
    Node* sec = rev(num2);
    int carry = 0;

    while (first != nullptr || sec != nullptr || carry == 1) {
        int data1 = (first != nullptr) ? first->data : 0;
        int data2 = (sec != nullptr) ? sec->data : 0;
        int sum = data1 + data2 + carry;
        
        temp->next = new Node(sum % 10);
        carry = sum / 10;

        if (first != nullptr) {
            first = first->next;
        }
        if (sec != nullptr) {
            sec = sec->next;
        }
        temp = temp->next;
    }

    Node* ans = rev(dummy.next);

    // Remove leading zeros, if any
    while (ans != nullptr && ans->data == 0) {
        Node* toDelete = ans;
        ans = ans->next;
        delete toDelete;
    }

    return ans;
}
