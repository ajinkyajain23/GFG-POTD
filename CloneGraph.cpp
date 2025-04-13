class Solution {
  public:
    Node* cloneGraph(Node* node) {
        // code here
        if (!node) return nullptr;

        unordered_map<Node*, Node*> map;
        queue<Node*> q;
        q.push(node);
        map[node] = new Node(node->val);
    
        while (!q.empty()) {
            Node* u = q.front();
            q.pop();
    
            for (Node* v : u->neighbors) {
                if (map.find(v) == map.end()) {
                    map[v] = new Node(v->val);
                    q.push(v);
                }
                map[u]->neighbors.push_back(map[v]);
            }
        }
    
        return map[node];
    }
};
