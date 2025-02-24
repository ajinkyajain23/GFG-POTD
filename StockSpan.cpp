    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        std::stack<int> st;
        std::vector<int> res(arr.size());
        res[0] = 1;
        
        for (size_t i = 0; i < arr.size(); ++i) {
            while (!st.empty() && arr[i] >= arr[st.top()]) {
                st.pop();
            }
            
            if (st.empty()) {
                res[i] = i + 1;
            } else {
                res[i] = i - st.top();
            }
            
            st.push(i);
        }
        
        return res;
    }
