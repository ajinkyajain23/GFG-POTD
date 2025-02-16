void serialize(Node* root, vector<int>& arr) {
        if (!root) {
            arr.push_back(-1);
            return;
        }
        arr.push_back(root->data);
        serialize(root->left, arr);
        serialize(root->right, arr);
    }

    vector<int> serialize(Node* root) {
        vector<int> arr;
        serialize(root, arr);
        return arr;
    }

    // Function to deserialize a list and construct the tree.
    Node* deSerialize(vector<int>& arr, int& index) {
        if (index >= arr.size() || arr[index] == -1) {
            index++;
            return nullptr;
        }
        
        Node* newNode = new Node(arr[index++]);
        newNode->left = deSerialize(arr, index);
        newNode->right = deSerialize(arr, index);
        return newNode;
    }

    Node* deSerialize(vector<int>& arr) {
        int index = 0;
        return deSerialize(arr, index);
    }
