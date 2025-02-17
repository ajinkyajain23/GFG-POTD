vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
        for(int i = 0; i < k; ++i) {
            pq.push(arr[i]);
        }
        
        for(int i = k; i < arr.size(); ++i) {
            if(arr[i] > pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        std::vector<int> res;
        while(!pq.empty()) {
            res.push_back(pq.top());
            pq.pop();
        }
        
        std::reverse(res.begin(), res.end());
        return res;
    }
